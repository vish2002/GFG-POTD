// Make Binary Tree From Linked List
// GFG : Medium 01-07-2024

TreeNode *solve(int i,vector<int> &arr,int n)
{
    if(i>=n)return nullptr;
    TreeNode *root=new TreeNode(arr[i]);
    root->left=solve(2*i+1,arr,n);
    root->right=solve(2*i+2,arr,n);
    return root;
}
void convert(Node *head, TreeNode *&root) {
    // Your code here
    vector<int> arr;
    Node *temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int n=arr.size();
    root=solve(0,arr,n);
}
