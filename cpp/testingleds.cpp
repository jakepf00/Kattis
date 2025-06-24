#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	int ans = -1;
	while (n--) {
		int a, b;
		cin >> a >> b;
		if (b == 0) {
			if (ans == -1) ans = a;
			else if (a < ans) ans = a;
		}
	}
	cout << ans << endl;
}
