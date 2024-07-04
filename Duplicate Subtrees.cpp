// Duplicate Subtrees
// GFG : Medium 04-07-2024


string DFS(Node *root, unordered_map<string, int> &temp, vector<Node*> &ans) {
    if (root == NULL) return "#";
    string x;
    x += to_string(root->data) + " ";
    x += DFS(root->left, temp, ans);
    x += DFS(root->right, temp, ans);
    
    if (temp[x] == 1) { // Found a duplicate
        ans.push_back(root);
    }
    temp[x]++;
    return x;
}

vector<Node*> printAllDups(Node* root) {
    unordered_map<string, int> temp;
    vector<Node*> ans;
    DFS(root, temp, ans);
    return ans;
}
