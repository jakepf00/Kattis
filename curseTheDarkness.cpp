#include <iostream>
#include <cmath>

using namespace std;

long double distance(long double x1, long double y1, long double x2, long double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    long double bookX, bookY, candleX, candleY;
    int candles, cases;
    bool works = false;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        works = false;
        cin >> bookX >> bookY >> candles;
        for (int i = 0; i < candles; i++) {
            cin >> candleX >> candleY;
            if (distance(bookX, bookY, candleX, candleY) <= 8) works = true;
        }
        if (works) {
            cout << "light a candle" << endl;
        } else cout << "curse the darkness" << endl;
    }
}
