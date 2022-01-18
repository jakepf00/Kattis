#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    num2--;
    int answer = num1 * num2;
    answer++;

    cout << answer << endl;

    return 0;
}
