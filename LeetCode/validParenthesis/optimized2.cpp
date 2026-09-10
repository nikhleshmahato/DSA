#include <iostream>
#include <string>
using namespace std;

void rec(int l, int r, int n, string s) {
    if (l == n && r == n) {
        cout << s << endl;
        return;
    }    
    
    if (l < n) {
        rec(l + 1, r, n, s + "(");
    }
    
    if (r < l) {
        rec(l, r + 1, n, s + ")");
    }
}
