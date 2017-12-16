#include <iostream>
#include <cmath>

using namespace std;

double distanceFormula(double, double, double, double, double);

int main() {
    double x1, y1, x2, y2, p, answer;

    while (cin >> x1 >> y1 >> x2 >> y2 >> p) {
        answer = distanceFormula(x1, y1, x2, y2, p);
        cout << answer << endl;
    }

    return 0;
}


double distanceFormula(double x1, double y1, double x2, double y2, double p) {
    double val1 = (pow(abs(x1 - x2), p));
    double val2 = (pow(abs(y1 - y2), p));
    double answer = pow((val1 + val2), (1 / p));
    return answer;
}
