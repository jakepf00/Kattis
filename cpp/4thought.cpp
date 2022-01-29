#include<bits/stdc++.h>
using namespace std;

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

string print(int op) {
    if (op == 0) return "+";
    else if (op == 1) return "-";
    else if (op == 2) return "*";
    else if (op == 3) return "/";
    else return "?";
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        int n;
        cin >> n;

        vector<int> ops;
        ops.push_back(0);
        ops.push_back(0);
        ops.push_back(0);

        bool ans = false;

        while (ops[0] < 4) {
            if (calc(ops[0], ops[1], ops[2], n)) {
                cout << "4 " << print(ops[0]) << " 4 " << print(ops[1]) << " 4 " << print(ops[2]) << " 4 = " << n << endl;
                ans = true;
                break;
            }
            else {
                ops[2]++;
                if (ops[2] > 3) {
                    ops[2] = 0;
                    ops[1]++;
                }
                if (ops[1] > 3) {
                    ops[1] = 0;
                    ops[0]++;
                }
            }
        }

        if (!ans) {
            cout << "no solution" << endl;
        }
    }
}
