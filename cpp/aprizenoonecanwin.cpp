#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	vector<int> prices;
	while (n--) {
		int price;
		cin >> price;
		prices.push_back(price);
	}
	sort(prices.begin(), prices.end());
	int ans = 1;
	for (ans; ans < prices.size(); ans++) {
		if (prices[ans] + prices[ans-1] > x) break;
	}
	cout << ans << endl;
}
