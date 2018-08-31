#include<bits/stdc++.h>

using namespace std;

int main() {
	int maxDifference;
	cin >> maxDifference;
	int currentDifference = 0; // M = 1, W = -1
	int peopleInClub = 0;
	string people;
	cin >> people;
	char first, second;
	first = people[0];
	for (int i = 1; i < people.length() + 1; i++) {
		if (i == people.length()) second = first;
		else second = people[i];
		if (abs(currentDifference) > maxDifference) {
			cout << --peopleInClub << endl;
			return 0;
		}
		if (currentDifference > 0) { // too many men, let in woman if available
			if (first == 'W') {
				first = second;
				currentDifference--;
			} else if (second == 'W') {
				currentDifference--;
			} else {
				currentDifference++; // just let in second person
			}
		} else { // too many women, let in man
			if (first == 'M') {
				first = second;
				currentDifference++;
			} else if (second == 'M') {
				currentDifference++;
			} else {
				currentDifference--;
			}
		}
		peopleInClub++;
	}
	cout << peopleInClub << endl;
}
