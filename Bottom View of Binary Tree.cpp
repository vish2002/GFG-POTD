// Bottom View of Binary Tree
// GFG : Medium 05-08-2024

class Solution {
  public:
map<int, pair<int, int>> hmap;
    void traverse(Node *root, int lvl, int idx) {
        if(root == nullptr) return;
        if(hmap.count(idx) == 0) {
            hmap[idx] = {lvl, root->data};
        }
        else {
            if(lvl >= hmap[idx].first) {
                hmap[idx] = {lvl, root->data};
            }
        }
        traverse(root->left, lvl+1, idx-1);
        traverse(root->right, lvl+1, idx+1);
    }
    vector <int> bottomView(Node *root) {
        traverse(root, 0, 0);
        vector<int> res;
        for(auto x : hmap) {
            res.push_back(x.second.second);
        }
        return res;
    }
};
