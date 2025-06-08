#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	int b, ans = 0;
	cin >> a >> b;
	while (b--) {
		string c;
		cin >> c;
		auto pos = c.find(a);
		while (pos != string::npos) {
			ans++;
			pos = c.find(a, pos + 1);
		}
	}
	cout << ans << endl;	
}
