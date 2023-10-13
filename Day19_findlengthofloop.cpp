/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {

    // Write your code here

    if(head == NULL || head -> next == NULL)return NULL;

    Node* slow = head;

    Node* fast = head;

    int count = 0;

    while(fast -> next && fast -> next -> next){

        slow = slow -> next;

        fast = fast -> next -> next;

        if(slow == fast){

            slow = slow -> next;

            count++;

          

            while(slow != fast){

                slow = slow -> next;

                count++;

            }

            return count;
            // t-c-> o(k+n)
            // s-c-> o(1)

        }

    }

    return NULL;

}
