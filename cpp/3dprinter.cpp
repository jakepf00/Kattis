#include<bits/stdc++.h>

using namespace std;

int main() {
	int printers = 1;
	int days = 0;
	int statues;
	cin >> statues;
	while (++days) {
		if (printers < statues) {
			printers *= 2;
		}
		else {
			cout << days << endl;
			return 0;
		}
	}
}
