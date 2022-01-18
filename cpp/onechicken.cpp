#include <iostream>

using namespace std;

int main() {
    int chicken, people;
    cin >> people >> chicken;

    if (chicken >= people) {
        if (chicken - 1 == people) {
            cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        } else {
            cout << "Dr. Chaz will have " << chicken - people << " pieces of chicken left over!" << endl;
        }
    } else {
        if (people - 1 == chicken) {
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << people - chicken << " more pieces of chicken!" << endl;
        }
    }

    return 0;
}
