#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int> blimps;
	string blimp;
	int blimpNum = 1;
	while (cin >> blimp) {
		if (blimp.find("FBI") != string::npos) blimps.push_back(blimpNum);
		blimpNum++;
	}
	if (blimps.size() > 0) {
		for (auto i : blimps) {
			cout << i << " ";
		}
		cout << endl;
	}
	else cout << "HE GOT AWAY!" << endl;
}
