// Binary Tree to DLL
// GFG : Hard 15-09-2024

class Solution {
  public:
  void inorder(Node* root,Node *&temp){
      if(!root)return;
      inorder(root->left,temp);
      
      Node *curr =new Node(root->data);
      temp->right=curr;
      curr->left=temp;
      temp=curr;
      
      inorder(root->right,temp);
      
  }
    Node* bToDLL(Node* root) {
        // code here
        Node *head=new Node(-1);
        Node *temp=head;
        inorder(root,temp);
        head=head->right;
        if(head)head->left=NULL;
        return head;
    }
};
