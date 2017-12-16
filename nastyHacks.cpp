#include <iostream>

using namespace std;

int main() {
    int cases, profit, adRevenue, adCost, adProfit;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> profit >> adRevenue >> adCost;

        adProfit = adRevenue - adCost;

        if (profit == adProfit) {
            cout << "does not matter" << endl;
        } else if (profit > adProfit) {
            cout << "do not advertise" << endl;
        } else if (profit < adProfit) {
            cout << "advertise" << endl;
        }
    }

    return 0;
}
