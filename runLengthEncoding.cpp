#include<bits/stdc++.h>

using namespace std;

string thing1(string word) {
	char current = word[0];
	int counter = 1;
	string ans = "";
	for (int i = 1; i < word.length(); i++) {
		if (word[i] == current) {
			counter++;
		} else {
			ans += current;
			ans += to_string(counter);
			counter = 1;
			current = word[i];
		}
		if (word.length() - 1 == i) {
			ans += current;
			ans += to_string(counter);
		}
	}
	if (ans == "") {
		ans += current;
		ans += "1";
	}
	return ans;
}

string thing2(string word) {
	string ans = "";
	for (int i = 0; i < word.length(); i += 2) {
		char letter = word[i];
		int number = ((int) word[i + 1]) - 48;
		while (number--) {
			ans += letter;
		}
	}
	return ans;
}

int main() {
	char thing;
	string word;
	cin >> thing >> word;
	if (thing == 'E') {
		cout << thing1(word) << endl;
	}
	else {
		cout << thing2(word) << endl;
	}
}
