Node*reverse(Node *head){

    Node*curr = head;
    Node*prev = NULL;
    Node*forward = NULL;

    while(curr != NULL){

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    Node*ans = reverse(head);
    Node *temp = new Node(0);
    Node*dummy = temp;
    
    int carry = 0;
    int count =0 ;
    while(ans != NULL){
        count++;
        
        if(count == 1){
            int sum = ans->data+1+carry;
            carry = sum/10;
            int digit = sum%10;

            Node*newnode = new Node(digit);
            temp->next = newnode;
            temp = temp->next;
            ans = ans->next;
            // count++;
        }
        int sum = ans->data+carry;
        carry = sum/10;
        int digit = sum%10;

        Node*newnode = new Node(digit);
        temp->next = newnode;
        temp = temp->next;
        ans = ans->next;    
    }

    if(carry != 0){
        Node * node = new Node(carry);
        temp->next = node;
        temp = temp->next;
        t-c-> o(n)
        s-c->o(n)
    }
    return reverse(dummy->next);
}
