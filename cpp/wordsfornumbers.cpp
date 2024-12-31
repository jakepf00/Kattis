#include<bits/stdc++.h>
using namespace std;

int main() {
    string nums[] = { "zero","one","two","three","four","five","six","seven",
        "eight","nine","ten","eleven","twelve","thirteen","fourteen",
        "fifteen","sixteen","seventeen","eighteen","nineteen" };
    string nums2[] = { "","","twenty","thirty","forty","fifty",
       "sixty","seventy","eighty","ninety" };

    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string word;
        vector<string> lineArr;
        while (ss >> word) {
            lineArr.push_back(word);
        }
        for (int i = 0; i < lineArr.size(); i++) {
            string word = lineArr[i];
            if (word.find_first_not_of("0123456789") == string::npos) {
                // is number
                string curOut = "";
                int num = stoi(word);
                if (num <= 19) curOut = nums[num] + " ";
                else {
                    if (num % 10 == 0) curOut = nums2[num / 10] + " ";
                    else curOut = nums2[num/10] + "-" + nums[num%10] + " ";
                }
                if (i == 0) curOut[0] = toupper(curOut[0]);
                cout << curOut;
            }
            else cout << word << " ";
        }
        cout << endl;
    }
}
