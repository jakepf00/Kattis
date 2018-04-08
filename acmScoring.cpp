#include <bits/stdc++.h>

using namespace std;

int main() {
    int time;
    char problem;
    string correct;
    map<char, int> score;
    while (cin >> time && time != -1) {
        cin >> problem >> correct;
        if (correct == "wrong") {
            score[problem] -= 20;
        } else {
            if (score[problem] < 0) {
                score[problem] *= -1;
            }
            score[problem] += time;
        }
    }
    int ans = 0;
    int answered = 0;
    map<char, int>::iterator it;
    for (it = score.begin(); it != score.end(); it++) {
        if (it->second > 0) {
            ans += it->second;
            answered++;
        }
    }
    cout << answered << " " << ans << endl;
}
