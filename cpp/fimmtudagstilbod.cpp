#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a < 2020) cout << 1000 << endl;
	else cout << 1000 + 100 * (a - 2020) << endl;
}
