// Identical Linked Lists
// GFG : Easy 29-06-2024

bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    struct Node *t1=head1;
    struct Node *t2=head2;
    while(t1!= NULL && t2!=NULL)
    {
        if(t1->data!=t2->data)return false;
        t1=t1->next;
        t2=t2->next;
    }
    if(t1!=NULL || t2!=NULL)return false;
    return true;
}
