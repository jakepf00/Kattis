#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    int max = 0;
    int prevTime = 0, prevDist = 0;
    while (num--) {
        int time, dist;
        cin >> time >> dist;
        if (time == 0) continue;
        int speed = (dist - prevDist) / (time - prevTime);
        if (speed > max) max = speed;
        prevTime = time;
        prevDist = dist;
    }
    cout << max << endl;
}
