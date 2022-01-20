#include<iostream>
using namespace std;

int main() {
    int i;
    cin >> i;
    int total = 1 - i;
    while(i--) {
        int j;
        cin >> j;
        total += j;
    }
    cout << total << endl;
}
