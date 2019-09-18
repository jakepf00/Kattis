#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<unsigned long long int> prices;
	unsigned long long int things;
	cin >> things;
	while (things--) {
		unsigned long long int price;
		cin >> price;
		prices.push_back(price);
	}
	sort(prices.rbegin(), prices.rend());
	unsigned long long int total = 0;
	for (int i = 0; i < prices.size(); i++) {
		if (i % 3 == 2) {
			total += prices[i];
		}
	}
	cout << total << endl;
}
