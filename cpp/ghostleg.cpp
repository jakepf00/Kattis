#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    for (int i = 1; i <= n; i++) nums.push_back(i);
    while (m--) {
        int a;
        cin >> a;
        a--;
        int temp = nums[a];
        nums[a] = nums[a + 1];
        nums[a + 1] = temp;
    }
    for (auto i : nums) {
        cout << i << endl;
    }
}
