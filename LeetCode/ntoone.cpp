#include <bits/stdc++.h>
using namespace std;

void rec(int l, int r, int n, string& s, vector<string>& ans) {
    if(l > n || r > n) return;
    if (l == n && r == n) {
        cout << s << endl;
        ans.push_back(s);
        return;
    }    
        rec(l + 1, r, n, s += "(", ans);
    if(l>r)
        rec(l, r + 1, n, s += ")", ans);
}

int main() {
    int n = 2;
    vector<string> ans;
    string s = "";
    rec(0, 0, n+1, s, ans);
    return 0;
}