// Smallest number
// GFG : Medium - 15-07-2024

// Recursion Approach
string solve(string t, int idx, int s, int d) {
    if (idx >= d && s != 0) {
        return "-1";
    }
    
    if (idx == d && s == 0) {
        return t;
    }
    
    for (int i = 0; i <= 9; i++) {
        if (idx == 0 && i == 0) continue;
        if ((s - i) >= 0) {
            string temp = solve(t + to_string(i), idx + 1, s - i, d);
            if (temp != "-1") {
                return temp;
            }
        }
    }
    
    return "-1";
}

string smallestNumber(int s, int d) {
    string t = "";
    return solve(t, 0, s, d);
}
