#include<bits/stdc++.h>
using namespace std;

int main() {
	long long cases;
	cin >> cases;
	for (long long i = 1; i <= cases; i++) {
		long long a;
		cin >> a;
		vector<long long> v1, v2;
		for (long long j = 0; j < a; j++) {
			long long b;
			cin >> b;
			v1.push_back(b);
		}
		for (long long j = 0; j < a; j++) {
			long long b;
			cin >> b;
			v2.push_back(b);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), greater<long long>());
		long long total = 0;
		for (long long j = 0; j < a; j++) {
			total += v1[j] * v2[j];
		}
		cout << "Case #" << i << ": " << total << endl;
	}
	return 0;
}
