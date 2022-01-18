#include<bits/stdc++.h>

using namespace std;

int main() {
	int player, questions, total=0;
	cin >> player >> questions;
	for (int i = 0; i < questions; i++) {
		int time;
		cin >> time;
		total += time;
		if (total > 210) {
			player %= 8;
			if (player == 0) player = 8;
			cout << player << endl;
			return 0;
		}
		char answer;
		cin >> answer;
		if (answer == 'T') player++;
	}
}
