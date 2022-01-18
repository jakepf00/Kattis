#include<bits/stdc++.h>

using namespace std;

bool checkDigits(int thing) {
	int x = thing;
	vector<int> garbo;
	while (x > 0) {
		garbo.push_back(x % 10);
		x /= 10;
	}
	sort(garbo.begin(), garbo.end());
	
	if (garbo[0] == 0) return false; // make sure digits are nonzero

	int prev = garbo[0];
	if (thing % prev != 0) return false;
	for (int i = 1; i < garbo.size(); i++) {
		int current = garbo[i];
		if (current == prev) return false; // make sure digits are all unique
		if (thing % current != 0) return false; // make sure its divisible by all digits;
		prev = current;
	}

	return true;

}	

int main() {
	int x, y, ans = 0;
	cin >> x >> y;
	for (int i = x; i <= y; i++) {
		if (checkDigits(i)) ans++;
	}
	cout << ans << endl;
	return 0;
}
