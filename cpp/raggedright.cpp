#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> lengths;
	string words;
	int ans = 0;
	while (getline(cin, words) && (words != "")) {
		lengths.push_back(words.length());
	}
	int x = lengths.back();
	lengths.pop_back();
	sort(lengths.rbegin(), lengths.rend());
	int biggest = max(lengths[0], x);
	for (int i = 0; i < lengths.size(); i++) {
		ans += ((biggest - lengths[i]) * (biggest - lengths[i]));
	}
	cout << ans << endl;
}
