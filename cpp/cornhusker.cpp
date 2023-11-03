#include<bits/stdc++.h>
using namespace std;

int main() {
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		int a, b;
		cin >> a >> b;
		avg += a * b;
	}
	avg /= 5;
	int ears, kwf;
	cin >> ears >> kwf;
	int ans = (ears * avg) / kwf;
	cout << ans << endl;
}
