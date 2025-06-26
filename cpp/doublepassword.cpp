#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	int ans = 1;
	cin >> a >> b;
	if (a[0] != b[0]) ans *= 2;
	if (a[1] != b[1]) ans *= 2;
	if (a[2] != b[2]) ans *= 2;
	if (a[3] != b[3]) ans *= 2;
	cout << ans << endl;
}
