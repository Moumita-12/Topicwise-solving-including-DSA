SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    
    if(position == 0){
        node->next = llist;
        return node;
    }
    
    int count = 1;
    
    SinglyLinkedListNode *current = llist;
    
    while(count<position){
        current = current->next;
        count++;  
    }
    node->next = current->next;
    current->next = node;
    return llist;
}
