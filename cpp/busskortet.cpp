#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	int transactions = 0;
	while (a > 0) {
		transactions++;
		if (a > 400) a -= 500;
		else if (a > 100) a -= 200;
		else a -= 100;
	}
	cout << transactions << endl;
}
