// Populate Inorder Successor for all nodes
// GFG : Medium 06-07-2024

Node* prev = NULL;
    void populateNext(Node *root) {
        if(root == NULL) return;
        populateNext(root->left);
        if(prev!=NULL) prev->next = root;
        prev = root;
        populateNext(root->right);;
    }
