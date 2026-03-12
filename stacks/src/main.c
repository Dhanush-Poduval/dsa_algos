#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

int main(){
  struct Node *head=NULL;
  stack_linked(&head,10);
  stack_linked(&head,20);
  stack_linked(&head,40);
  stack_linked(&head,50);
  stack_linked_peek(head);
  stack_linked_pop(&head);
  stack_linked_peek(head);
  
}
