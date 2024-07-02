// linked list of strings forms a palindrome
// GFG : Easy 02-07-2024

bool compute(Node* head) {
        // Your code goes here
        Node *temp=head;
        string str="";
        while(temp!=NULL)
        {
            str+=temp->data;
            temp=temp->next;
        }
        int n=str.length();
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
