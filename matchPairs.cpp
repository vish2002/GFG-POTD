// Nuts and Bolts Problem
// GFG:Medium 10-06-2024

// Intution: We can see that the characters in the Order are sorted inorder of their ascii values.So we just have to sort the arrays nuts and bolts.

// Link:https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html  

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        sort(nuts,nuts+n);
        sort(bolts,bolts+n);
    }
