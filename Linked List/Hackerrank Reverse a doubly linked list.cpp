DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    if(llist == nullptr || llist->next == nullptr){
        return llist;
    }
    
    DoublyLinkedListNode *prevNode;
    DoublyLinkedListNode *currentNode;
    DoublyLinkedListNode *nextNode;
    
    prevNode = llist;
    currentNode = llist->next;
    
    prevNode->prev = currentNode;
    prevNode->next = nullptr;
    
    while(currentNode->next != nullptr){
        nextNode = currentNode->next;
        
        currentNode->next = prevNode;
        currentNode->prev = nextNode;
        
        prevNode = currentNode;
        currentNode = nextNode;  
    }
    
    currentNode->next = prevNode;
    currentNode->prev = nullptr;
    
     return currentNode;
}
