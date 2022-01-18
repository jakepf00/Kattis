#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers[5];
    int ans[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    while (numbers[0] != 1 || numbers[1] != 2 || numbers[2] != 3 || numbers[3] != 4 || numbers[4] != 5) {
        for (int i = 0; i < 4; i++) {
            if (numbers[i] > numbers[i + 1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
                for (int j = 0; j < 5; j++) {
                    cout << numbers[j] << " ";
                }
                cout << endl;
            }
        }
    }
}
