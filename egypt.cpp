#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> numbers;
	numbers.resize(3);
	while (cin >> numbers[0] >> numbers[1] >> numbers[2] && numbers[0] != 0 && numbers[1] != 0 && numbers[2] != 0) {
		sort(numbers.begin(), numbers.end());
		if ((numbers[0] * numbers[0] + numbers[1] * numbers[1]) == (numbers[2] * numbers[2])) {
			cout << "right" << endl;
		} else {
			cout << "wrong" << endl;
		}
	}
}
