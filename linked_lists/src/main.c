#include <stdio.h>
#include "linked.h"
#include <stdlib.h>


int main(){
  struct Node *head=NULL;
  insert_head(&head,10);
  insert_tail(&head,20);
  insert_middle(&head,30,20);
  insert_head(&head,50);
  insert_tail(&head,60);
  print_linked_list(head);
  delete_head(&head);
  delete_tail(&head);
  print_linked_list(head);
  delete_middle(&head,1);
  reverse_linked_list(head);
  


}
