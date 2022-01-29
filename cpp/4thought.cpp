#include<bits/stdc++.h>
using namespace std;

vector<char> ops = { '+', '-', '*', '/' };

int doOp(int val1, int op, int val2) {
    if (op == 0) return val1 + val2;
    else if (op == 1) return val1 - val2;
    else if (op == 2) return val1 * val2;
    else if (op == 3) return val1 / val2;
    else return 0;
}

bool calc(int op1, int op2, int op3, int n) {
    vector<int> ops;
    ops.push_back(op1);
    ops.push_back(op2);
    ops.push_back(op3);
    vector<int> vals(4, 4);

    for (int i = 0; i < ops.size(); i++) { // do mult/div
        if (ops[i] > 1) {
            vals[i] = doOp(vals[i], ops[i], vals[i+1]);
            vals.erase(vals.begin()+i+1);
            ops.erase(ops.begin()+i);
            i = 0;
        }
    }
    while (ops.size() > 0) { // do add/sub
        vals[0] = doOp(vals[0], ops[0], vals[1]);
        vals.erase(vals.begin() + 1);
        ops.erase(ops.begin());
    }

    if (n == vals[0]) return true;
    else return false;
}

bool calcAns(int n) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (calc(i, j, k, n)) {
                    cout << "4 " << ops[i] << " 4 " << ops[j] << " 4 " << ops[k] << " 4 = " << n << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        int n;
        cin >> n;
        
        if (!calcAns(n)) {
            cout << "no solution" << endl;
        }
    }
}
