#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	map<int, int> nums;
	for (int i = 0; i < a; i++) {
		int temp;
		cin >> temp;
		if (nums.find(temp) != nums.end()) nums[temp]++;
		else nums.insert({temp, 1});
	}
	while (b--) {
		int t, d;
		cin >> t >> d;
		if (t == 1) {
			auto loc = nums.upper_bound(d);
			if (loc->second == 0) cout << -1 << "\n";
			else {
				cout << loc->first << "\n";
				loc->second--;
				if (loc->second == 0) nums.erase(loc->first);
			}
		}
		else {
			auto loc = nums.upper_bound(d);
			if (loc != nums.begin()) {
				loc = prev(loc, 1);
				cout << loc->first << "\n";
				loc->second--;
				if (loc->second == 0) nums.erase(loc->first);
			}
			else cout << -1 << "\n";
			
		}
	}
}