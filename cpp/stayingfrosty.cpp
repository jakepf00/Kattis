#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	b *= 360;
	if (b >= a) cout << "YES" << endl;
	else cout << "NO" << endl;
}
