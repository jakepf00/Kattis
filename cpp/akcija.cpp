#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> books;
    int book, number, ans = 0;
    cin >> number;
    for (int i = 0; i < number; i++) {
        cin >> book;
        books.push_back(book);
    }
    sort(books.begin(), books.end());
    reverse(books.begin(), books.end());

    int j;
    for (j = 2; j < books.size(); j += 3) {
        ans += books[j - 2];
        ans += books[j - 1];
    }
    j -= 2;
    for (j; j < books.size(); j++) {
        ans += books[j];
    }
    cout << ans << endl;
}
