// Add 1 to a Linked List Number
// GFG : Medium 15-08-2024

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node *reverse(Node *head)
    {
        Node *prev=NULL;
        Node *curr=head;
        Node *next=NULL;
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        head=reverse(head);
        Node *temp=head;
        int carry=0;
        bool flag=false;
        while(temp!=NULL)
        {
            int sum=0;
            if(!flag){
            sum =temp->data+1;
            flag=true;}
            else sum =temp->data+carry;
            temp->data=sum %10;
            carry=sum/10;
            while(!temp->next && carry!=0)
            {
                temp->next=new Node(carry % 10);
                carry/=10;
                temp=temp->next;
            }
            temp=temp->next;
        }
        head=reverse(head);
        return head;
        
    }
};
