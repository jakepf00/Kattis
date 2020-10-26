#include<bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int num;
	cin >> num;
	while (num--) {
		string word;
		cin >> word;
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		string one = "pink";
		string two = "rose";
		if ((word.find(one) != string::npos) || (word.find(two) != string::npos)) {
			count++;
		}
	}
	if (count > 0) cout << count << endl;
	else cout << "I must watch Star Wars with my daughter" << endl;
}
