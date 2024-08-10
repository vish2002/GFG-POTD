// Rotate a Linked List
// GFG : Medium 10-08-2024

class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        Node *t=head;
        int i=0;
        Node *prev=NULL;
        while(i<k)
        {
            prev=t;
            t=t->next;
            i++;
        }
        if(t!=NULL && k!=0){
        Node *h=t;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=head;
        prev->next=NULL;
        return h;
        }
        return head;
    }
};
