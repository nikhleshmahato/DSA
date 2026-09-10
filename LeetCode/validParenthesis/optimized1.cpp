void rec(int l, int r, int n, string& s, vector<string>& ans) {
    // Base Case
    if (l == n && r == n) {
        ans.push_back(s);
        return;
    }    
    
    // Try adding '('
    if (l < n) {
        s.push_back('(');
        rec(l + 1, r, n, s, ans);
        s.pop_back(); // Backtrack
    }
    
    // Try adding ')'
    if (r < l) {
        s.push_back(')');
        rec(l, r + 1, n, s, ans);
        s.pop_back(); // Backtrack
    }
}
