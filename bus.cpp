#include<bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int stops;
		cin >> stops;
		int passengers = 0;
		while (stops--) {
			passengers *= 2;
			passengers++;
		}
		cout << passengers << endl;
	}
}
