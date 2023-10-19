#include<bits/stdc++.h>
using namespace std;

int main() {
	int blocks;
	cin >> blocks;
	int layers = 0;
	for (int dimension = 1; blocks >= 0; dimension += 2) {
		blocks -= (dimension * dimension);
		layers++;
	}
	cout << layers - 1 << endl;
}
