#include<bits/stdc++.h>

using namespace std;

int main() {
	int papers;
	vector<int> citations;
	cin >> papers;
	while (papers--) {
		int paper;
		cin >> paper;
		citations.push_back(paper);
	}
	sort(citations.rbegin(), citations.rend());
	for (int h = 0; h < citations.size(); h++) {
        if (!(citations[h] > h)) {
            cout << h << endl;
            return 0;
        }
	}
    cout << citations.size() << endl;
}
