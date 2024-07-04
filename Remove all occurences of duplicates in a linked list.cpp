// Remove all occurences of duplicates in a linked list
// GFG : Medium 03-07-2024

Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node *prev=NULL;
        Node *temp=head;
        Node *curr=prev;
        while(temp!=NULL)
        {
            int count=0;
            while(temp && temp->next)
            {
                if(temp->data == temp->next->data)
                {
                    count++;
                    temp=temp->next;
                }
                else break;
            }
            if(count>0)
            {
                if(prev==NULL)
                {
                    head=temp->next;
                    temp=head;
                }
                else
                {
                    prev->next=temp->next;
                    temp=temp->next;
                }
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
