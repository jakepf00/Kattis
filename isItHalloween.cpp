#include<bits/stdc++.h>

using namespace std;

int main() {
	string month;
	int day;
	cin >> month >> day;
	if ((month == "OCT" && day == 31) || (month == "DEC" && day == 25)) {
		cout << "yup" << endl;
	} else { cout << "nope" << endl; }
}
