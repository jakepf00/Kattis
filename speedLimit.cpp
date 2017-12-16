#include <iostream>

using namespace std;

int main() {
    int n = 0, speed = 0, time = 0, prevTime = 0, time2 = 0, miles = 0;

    while (true) {
        speed = 0; time = 0; prevTime = 0; time2 = 0; miles = 0;
        cin >> n;
        if (n == -1) { return 0; }
        for (int i = 0; i < n; i++) {
            cin >> speed >> time;
            time2 = time - prevTime;
            prevTime = time;
            miles += (time2 * speed);
        }
        cout << miles << " miles" << endl;
    }
}
