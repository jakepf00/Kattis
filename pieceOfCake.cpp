#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a - b, b) * max(a - c, c) * 4 << endl;
}
