#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int a;
		cin >> a;
		vector<int> first(a + 1);
		for (int i = 0; i < a + 1; i++) cin >> first[i];
		
		int b;
		cin >> b;
		vector<int> ans(a + b + 1);
		for (int i = 0; i < b + 1; i++) {
			int c;
			cin >> c;
			for (int j = 0; j < first.size(); j++) {
				ans[i + j] += first[j] * c;
			}	
		}

		cout << a + b << endl;
		for (auto i : ans) cout << i << " ";
		cout << endl;
	}
}
