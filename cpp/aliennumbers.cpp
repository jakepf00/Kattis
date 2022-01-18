#include<bits/stdc++.h>

using namespace std;

int toBaseTen(string number, string language) {
	int base = language.length();
	int power = number.length();
	int numBaseTen = 0;
	for (int i = 0; i < number.length(); i++) {
		power--;
		numBaseTen += pow(base, power) * language.find(number[i]);
	}
	return numBaseTen;
}
string toAlienBase(int number, string language) {
	int base = language.length();
	int power = 0;
	while (pow(base, power) <= number) power++;
	string ans = "";
	for (int i = 0; power > 0; i++) {
		power--;
		int thing = 0;
		while(pow(base, power) * thing <= number) thing++;
		thing--;
		number -= (pow(base, power) * thing);
		ans.push_back(language[thing]);	
	}
	return ans;
}

int main() {
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		string alienNumber, sourceLanguage, targetLanguage;
		cin >> alienNumber >> sourceLanguage >> targetLanguage;
		int baseTen = toBaseTen(alienNumber, sourceLanguage);
		string ans = toAlienBase(baseTen, targetLanguage);
		
		cout << "Case #" << i + 1 << ": " << ans << endl;
	}
}
