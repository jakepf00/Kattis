#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	n = n * m;
	string ans = "";
	while (n--) {
		char a;
		cin >> a;
		if (isalpha(a)) ans.push_back(a);
	}
	cout << ans << endl;
}
