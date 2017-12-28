#include <iostream>

using namespace std;

int main() {
    int cards, score = 0;
    char trump;
    string thingy;
    cin >> cards >> trump;

    cards *= 4;

    for(int i = 0; i < cards; i++) {
        cin >> thingy;
        char card = thingy[0];
        char suit = thingy[1];
        if(suit == trump) {
            switch(card) {
                case 'A': score += 11; break;
                case 'K': score += 4; break;
                case 'Q': score += 3; break;
                case 'J': score += 20; break;
                case 'T': score += 10; break;
                case '9': score += 14; break;
            }
        }
        else {
            switch(card) {
                case 'A': score += 11; break;
                case 'K': score += 4; break;
                case 'Q': score += 3; break;
                case 'J': score += 2; break;
                case 'T': score += 10; break;
            }
        }
    }

    cout << score << endl;
}
