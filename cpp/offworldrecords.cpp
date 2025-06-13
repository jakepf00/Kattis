#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, cur, prev;
	cin >> n >> cur >> prev;
	int ans = 0;
	while (n--) {
		int a;
		cin >> a;
		if (a > cur + prev) {
			ans++;
			prev = cur;
			cur = a;
		}
	}
	cout << ans << endl;
}
