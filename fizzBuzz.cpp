#include <iostream>

using namespace std;

int main() {
    int fizz, buzz, count;
    cin >> fizz >> buzz >> count;

    for (int i = 1; i <= count; i++) {
        if ((i % fizz == 0) && (i % buzz == 0)) cout << "FizzBuzz" << endl;
        else if (i % fizz == 0) cout << "Fizz" << endl;
        else if (i % buzz == 0) cout << "Buzz" << endl;
        else cout << i << endl;
    }

    return 0;
}
