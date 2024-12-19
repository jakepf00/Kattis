#include<bits/stdc++.h>

using namespace std;

int main() {
  // Read in the inputs
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 && b == 0) break; // Stop reading when 0 0 is encountered

    // Initialize the carry and digit counters
    int carry = 0;
    int digits = 0;

    // Add the digits one at a time, starting from the rightmost digits
    while (a > 0 || b > 0) {
      // Get the rightmost digits of each number
      int a_digit = a % 10;
      int b_digit = b % 10;

      // Add the digits and the carry from the previous digit
      int sum = a_digit + b_digit + carry;

      // If the sum is greater than 9, there is a carry
      if (sum >= 10) carry = 1;
      else carry = 0;

      // Increment the digit counter
      if (carry == 1) digits++;

      // Remove the rightmost digit from each number
      a /= 10;
      b /= 10;
    }

    // Print the result
    if (digits == 0) cout << "No carry operation." << endl;
    else if (digits == 1) cout << "1 carry operation." << endl;
    else cout << digits << " carry operations." << endl;
  }

  return 0;
}
