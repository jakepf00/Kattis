#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // sc,co,cu,nb,in,sn,sb,cs,hf,os,pb,bi,bh,hs,cn,ho,yb,np,pu,bk,cf,no,si,ni
    unordered_set<string> table = {
        "h","he","li","be","b","c","n","o","f","ne",
        "na","mg","al","p","s","cl","ar","k","ca","ti","v","cr",
        "mn","fe","zn","ga","ge","as","se","br","kr","rb",
        "sr","y","zr","mo","tc","ru","rh","pd","ag","cd",
        "te","i","xe","ba","ta","w","re","ir","pt","au","hg",
        "tl","po","at","rn","fr","ra","rf","db","sg",
        "mt","ds","rg","fl","lv","la","ce","pr","nd","pm","sm","eu",
        "gd","tb","dy","er","tm","lu","ac","th","pa","u",
        "am","cm","es","fm","md","lr"
    };

    int t;
    cin >> t;
    while (t--) {
        string word;
        cin >> word;

        set<string> trying;
        trying.insert("");

        bool possible = false;
        while (trying.size() > 0 && possible == false) {
            string cur = *trying.begin();
            trying.erase(cur);
            string a;

            a = string(1, word[cur.length()]);
            if (table.find(a) != table.end()) {
                trying.insert(cur + a);
                if (cur + a == word) possible = true;
            }

            if (word.length() > cur.length() + 1) {
                // Can do 2 char length
                a += string(1, word[cur.length() + 1]);
                if (table.find(a) != table.end()) {
                    trying.insert(cur + a);
                    if (cur + a == word) possible = true;
                }
            }
        }

        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
