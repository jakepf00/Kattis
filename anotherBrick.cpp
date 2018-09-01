#include<bits/stdc++.h>

using namespace std;

int main() {
	int height, width, bricks;
	cin >> height >> width >> bricks;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width;) {
			if (bricks == 0) {
				cout << "NO" << endl;
				return 0;
			}
			bricks--;
			int brick;
			cin >> brick;
			j += brick;
			if (j > width) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
}
