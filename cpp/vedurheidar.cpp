#include<bits/stdc++.h>
using namespace std;

int main() {
	int wind, roads;
	cin >> wind >> roads;
	while (roads--) {
		string road;
		int safe;
		cin >> road >> safe;
		if (wind > safe) cout << road << " lokud" << endl;
		else cout << road << " opin" << endl;
	}
}
