#include <iostream>

using namespace std;

int main() {
    long double radius, radiusCheeze, area, areaCheeze, a;

    cin >> radius >> a;

    radiusCheeze = radius - a;

    area = radius * radius * 3.14159265359;
    areaCheeze = radiusCheeze * radiusCheeze * 3.14159265359;

    long double answer = (areaCheeze / area) * 100;

    cout.precision(10);
    cout << answer << endl;

    return 0;
}
