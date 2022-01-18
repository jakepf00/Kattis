#include<bits/stdc++.h>

using namespace std;

int main() {
	int questions;
	cin >> questions;
	int adrian=0, bruno=0, goran=0;
	char a, b, g, correct;

	for (int i = 0; i < questions; i++) {
		cin >> correct;

		if (i % 3 == 0) a = 'A';
		else if (i % 3 == 1) a = 'B';
		else a = 'C';
		if (a == correct) adrian++;

		if (i % 2 == 0) b = 'B';
		else if (i % 4 == 1) b = 'A';
		else b = 'C';
		if (b == correct) bruno++;

		if (i % 6 == 0 || i % 6 == 1) g = 'C';
		else if (i % 6 == 2 || i % 6 == 3) g = 'A';
		else g = 'B';
		if (g == correct) goran++;
	}

	vector<int> scores;
	scores.push_back(adrian);
	scores.push_back(bruno);
	scores.push_back(goran);
	sort(scores.begin(), scores.end());
	cout << scores[2] << endl;
	if (scores[2] == adrian) cout << "Adrian" << endl;
	if (scores[2] == bruno)  cout << "Bruno"  << endl;
	if (scores[2] == goran)  cout << "Goran"  << endl;
}
