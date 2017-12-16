#include <iostream>
#include <set>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0, d = 0, e = 0, number;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> number;
            switch (i) {
                case 0:
                    a += number;
                    break;
                case 1:
                    b += number;
                    break;
                case 2:
                    c += number;
                    break;
                case 3:
                    d += number;
                    break;
                case 4:
                    e += number;
                    break;
            }
        }
    }

    int aa = a;
    int bb = b;
    int cc = c;
    int dd = d;
    int ee = e;
    int temp;
    if (e > d) d = e;
    if (d > c) c = d;
    if (c > b) b = c;
    if (b > a) a = b;

    if (a == aa) cout << "1 ";
    else if (a == bb) cout << "2 ";
    else if (a == cc) cout << "3 ";
    else if (a == dd) cout << "4 ";
    else if (a == ee) cout << "5 ";

    cout << a << endl;

    return 0;
}

