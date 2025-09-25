#include<bits/stdc++.h>
using namespace std;

int main() {
	int ans = 0;
	int n;
	cin >> n;
	while (n > 0) {
		int a = 0;
		while (pow(2, a + 1) <= n) a++;
		n -= pow(2, a);
		ans++;
	}
	cout << ans << endl;
}
