#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	vector<int> numbers;
	bool correct = true;
	for (int i = 0; i < x; i++) {
		string y;
		cin >> y;
		if (y != "mumble") {
			int z = stoi(y);
			if (z != (i + 1)) {
				cout << "something is fishy" << endl;
				return 0;
			}
		}
	}
	cout << "makes sense" << endl;
}
