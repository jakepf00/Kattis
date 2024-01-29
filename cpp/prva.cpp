#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<string> crossword;
	while (a--) {
		string word;
		cin >> word;
		crossword.push_back(word);
	}

	vector<string> words;
	for (auto i : crossword) {
		string cur = "";
		for (auto j : i) {
			if (j == '#') {
				words.push_back(cur);
				cur = "";
			}
			else cur.push_back(j);
		}
		words.push_back(cur);
	}
	for (int i = 0; i < crossword[0].size(); i++) {
		string cur = "";
		for (int j = 0; j < crossword.size(); j++) {
			if (crossword[j][i] == '#') {
				words.push_back(cur);
				cur = "";
			}
			else cur.push_back(crossword[j][i]);
		}
		words.push_back(cur);
	}

	sort(words.begin(), words.end());
	for (auto i : words) {
		if (i.length() >= 2) {
			cout << i << endl;
			break;
		}
	}
}
