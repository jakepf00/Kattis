#include<bits/stdc++.h>

using namespace std;

int findLetter(char letter, string word) {
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == letter) {
			return i;
		}
	}
}

int main() {
	string word1, word2;
	cin >> word1 >> word2;
	int one, two;
	for (int i = 0; i < word1.length(); i++) {
		char letter = word1[i];
		if (word2.find(letter) != string::npos) {
			one = i;
			two = findLetter(letter, word2);
			break;
		}
	}
	for (int i = 0; i < word2.length(); i++) {
		for (int j = 0; j < word1.length(); j++) {
			if (j == one) {
				cout << word2[i];
			} else if (i == two) {
				cout << word1[j];
			} else {
				cout << '.';
			}
		}
		cout << endl;
	}
}
