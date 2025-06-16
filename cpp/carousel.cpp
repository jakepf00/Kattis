#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m && n != 0) {
		int cur1 = 0, cur2 = 0;
		double curDeal = 0;
		while (n--) {
			int a, b;
			cin >> a >> b;
			if (a > m) continue;
			double thisDeal = (double) b / (double) a;
			if (cur1 == 0 || thisDeal < curDeal || (thisDeal == curDeal && a > cur1)) {
				cur1 = a;
				cur2 = b;
				curDeal = thisDeal;
			}
		}
		if (cur1 != 0) cout << "Buy " << cur1 << " tickets for $" << cur2 << endl;
		else cout << "No suitable tickets offered" << endl;
	}
}
