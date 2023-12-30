
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {

  DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
  
  if(llist == nullptr){
      return node;
  }
  
  if(llist->data > data){
      llist->prev = node;
      node->next = llist;
      return node;  
  }
  
  DoublyLinkedListNode *current = llist;
  while(current->next != nullptr){
      if(current->data <= data && current->next->data > data){
          break;
      }
      
      current = current->next;
      
  }
  
  DoublyLinkedListNode *nextnode = current->next;
  node->prev = current;
  node->next = nextnode; 
  current->next = node;
  if(nextnode != nullptr){
      nextnode->prev = node;
  }
  
  return llist;
}
