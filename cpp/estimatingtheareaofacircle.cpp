#include<bits/stdc++.h>

using namespace std;

int main() {
    cout << fixed;
    cout.precision(6);
    double radius, points, cPoints, pi;
    pi = 3.141592654;
    while (true) {
        cin >> radius >> points >> cPoints;
        if (points == 0) return 0;
        double cArea = pi * radius * radius;
        double sArea = 4  * radius * radius;
        double estimate = (cPoints / points) * sArea;
        cout << cArea << " " << estimate << endl;
    }
}
