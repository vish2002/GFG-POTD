// Delete node in Doubly Linked List
// GFG : Easy 30-06-2024

Node* deleteNode(Node* head, int x) {
        // Your code here
        Node * temp= head;
        int count=1;
        if(x==1)return head->next;
        while(temp!=NULL && count!=x)
        {
            temp=temp->next;
            count++;
        }
        Node * y= temp;
        temp->prev->next=temp->next;
        if(temp->next!=NULL)temp->next->prev=temp->prev;
        delete y;
        return head;
        
    }
