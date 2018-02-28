#include<bits/stdc++.h>

using namespace std;

int main() {
    long double bookX, bookY, candleX, candleY;
    int cases, candles;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> bookX >> bookY >> candles;
        for (int i = 0; i < candles; i++) {
            cin >> candleX >> candleY;
            if (sqrt((bookX - candleX) * (bookX - candleX) + (bookY - candleY) * (bookY - candleY)) <= 8.000000001) {
                cout << "light a candle" << endl;
                break;
            } else if (i == candles - 1) {
                cout << "curse the darkness" << endl;
            }
        }
    }
}
