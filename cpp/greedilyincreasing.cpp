#include<bits/stdc++.h>
using namespace std;

int main () {
	int a;
	cin >> a;
	vector<int> nums;
	int prev = 0;
	while(a--) {
		int num;
		cin >> num;
		if (num > prev) {
			nums.push_back(num);
			prev = num;
		}
	}
	cout << nums.size() << endl;
	for (auto i : nums) {
		cout << i << " ";
	}
	cout << endl;
}
