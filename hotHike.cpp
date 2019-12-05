#include<bits/stdc++.h>
using namespace std;

int main() {
	int days;
	cin >> days;
	vector<int> temps;
	for (int i = 0; i < days; i++) {
		int temp;
		cin >> temp;
		temps.push_back(temp);
	}
	int mintemp = 10000;
	int day = 0;
	for (int i = 2; i < days; i++) {
		if (max(temps[i-2], temps[i]) < mintemp) {
			mintemp = max(temps[i-2], temps[i]);
			day = i - 2;
		}
	}
	cout << day + 1 << " " << mintemp << endl;
}
