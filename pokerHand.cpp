#include<bits/stdc++.h>

using namespace std;

int main() {
	int cards = 5;
	vector<int> hand;
	hand.resize(13);
	while (cards--) {
		string card;
		cin >> card;
		char value = card[0];
		switch (value) {
			case 'A': hand[0]++; break;
			case '2': hand[1]++; break;
			case '3': hand[2]++; break;
			case '4': hand[3]++; break;
			case '5': hand[4]++; break;
			case '6': hand[5]++; break;
			case '7': hand[6]++; break;
			case '8': hand[7]++; break;
			case '9': hand[8]++; break;
			case 'T': hand[9]++; break;
			case 'J': hand[10]++; break;
			case 'Q': hand[11]++; break;
			case 'K': hand[12]++; break;
		}
	}
	sort(hand.begin(), hand.end());
	cout << hand[12] << endl;
}
