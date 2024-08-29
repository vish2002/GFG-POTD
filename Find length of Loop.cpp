// Find length of Loop
// GFG : EASY 29-08-2024

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            int loopLength = 1;
            Node *temp = slow;
            while (temp->next != slow) {
                loopLength++;
                temp = temp->next;
            }
            return loopLength;
        }
    }
    return 0;
    }
};
