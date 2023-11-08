#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n < 100) cout << 99 << endl;
	else {
		n -= 49;
		while ((n + 1) % 100 != 0) n++;
		cout << n << endl;
	}
}
