#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a * 45 << " ml gin" << endl;
	cout << a * 30 << " ml fresh lemon juice" << endl;
	cout << a * 10 << " ml simple syrup" << endl;
	if (a == 1) cout << "1 slice of lemon" << endl;
	else cout << a << " slices of lemon" << endl;
}
