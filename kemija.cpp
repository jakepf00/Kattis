#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        char x = a[i];
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            a.erase(i + 1, 2);
        }
    }
    cout << a << endl;
}
