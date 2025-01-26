#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, total = 0;
	cin >> a;
	while (a--) {
		int b;
		cin >> b;
		total += b;
	}
	if (total % 3 == 0) cout << "yes" << endl;
	else cout << "no" << endl;
}
