#include<bits/stdc++.h>

using namespace std;

int main() {
    int matrix[4] = {0};
    int determinant;
    int i = 1;
    while(cin >> matrix[0] >> matrix[1] >> matrix[2] >> matrix[3]) {
        matrix[1] = -1 * matrix[1];
        matrix[2] = -1 * matrix[2];

        int temp = matrix[0];
        matrix[0] = matrix[3];
        matrix[3] = temp;

        determinant = matrix[0] * matrix[3] - matrix[1] * matrix[2];

        matrix[0] /= determinant;
        matrix[1] /= determinant;
        matrix[2] /= determinant;
        matrix[3] /= determinant;

        cout << "Case " << i << ":" << endl << matrix[0] << " " << matrix[1] << endl << matrix[2] << " " << matrix[3] << endl;
        i++;
    }
}
