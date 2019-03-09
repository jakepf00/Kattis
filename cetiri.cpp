#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> numbers(3);
    cin >> numbers[0] >> numbers[1] >> numbers[2];
    sort(numbers.begin(), numbers.end());
    int one = numbers[1] - numbers[0];
    int two = numbers[2] - numbers[1];
    if (one == two) {
        cout << numbers[2] + one << endl;
    }
    else if (two > one) {
        cout << numbers[1] + one << endl;
    }
    else cout << numbers[0] + two << endl;
}
