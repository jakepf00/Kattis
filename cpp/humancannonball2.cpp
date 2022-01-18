#include <bits/stdc++.h>

using namespace std;

int main() {
    long double velocity, angle, distance, low, high;
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> velocity >> angle >> distance >> low >> high;
        angle /= 180; angle *= 3.14159;
        long double time = distance / (velocity * cos(angle));
        long double height = velocity * time * sin(angle) - .5 * 9.81 * time * time;
        low++;
        high--;
        //cout << cos(angle) << " " << time << " " << height << endl;
        if (height > low && height < high) cout << "Safe" << endl;
        else cout << "Not Safe" << endl;
    }
}
