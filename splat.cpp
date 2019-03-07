#include<bits/stdc++.h>

using namespace std;

double PI = 3.14159265;

struct color {
    double x, y, v;
    string name;
};

bool hits(color c, double x, double y) {
    double r = sqrt(c.v / PI);
    return (sqrt((c.y - y) * (c.y - y) + (c.x - x) * (c.x - x)) < r);
}

int main() {
    int paintings;
    cin >> paintings;
    while (paintings--) {
        vector<color> painting;
        int colors;
        cin >> colors;
        while (colors--) {
            color thing;
            cin >> thing.x >> thing.y >> thing.v >> thing.name;
            painting.push_back(thing);
        }
        int cases;
        cin >> cases;
        while (cases--) {
            double x, y;
            cin >> x >> y;
            for (int i = painting.size() - 1; i >= 0; i--) {
                if (hits(painting[i], x, y)) {
                    cout << painting[i].name << endl;
                    break;
                }
                else if (i == 0) {
                    cout << "white" << endl;
                }
            }
        }
    }
}
