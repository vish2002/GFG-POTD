// Middle of a Linked List
// GFG : Easy 12-09-2024

int getMiddle(Node* head) {
        Node* mid = head;
        int md = 0;
        int count = 1;
        while(head!=NULL){
            if(count/2 != md){
                mid = mid->next;
                md = count/2;
            }
            count++;
            head = head->next;
        }
        return mid->data;
    }
