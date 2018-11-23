#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	int numCompanies, requests;
	cin >> numCompanies >> requests;
	vector<long long> companies;
	companies.resize(numCompanies);
	//map<ll, ll> companies;
	for (int i = 0; i < numCompanies; i++) {
		long long x;
		cin >> x;
		companies[i] = x;
	}
	while (requests--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			companies[b-1] = c;
		} else {
			cout << abs(companies[b-1] - companies[c-1]) << endl;
		}
	}
}
