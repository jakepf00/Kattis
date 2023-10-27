#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	vector<string> scale = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
	vector<string> played;
	while (a--) {
		string note;
		cin >> note;
		played.push_back(note);
	}
	bool usedOne = false;
	for (int i = 0; i < 12; i++) {
		if (find(played.begin(), played.end(), scale[i+1]) != played.end()) continue;
		if (find(played.begin(), played.end(), scale[i+3]) != played.end()) continue;
		if (find(played.begin(), played.end(), scale[i+6]) != played.end()) continue;
		if (find(played.begin(), played.end(), scale[i+8]) != played.end()) continue;
		if (find(played.begin(), played.end(), scale[i+10]) != played.end()) continue;
		cout << scale[i] << " ";
		usedOne = true;
	}
	if (!usedOne) cout << "none";
	cout << endl;
}
