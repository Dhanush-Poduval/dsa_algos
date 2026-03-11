#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>


int main(){
  struct Node *head;
  insert_head(&head,10);
  insert_tail(&head,20);
  insert_middle(&head,30,20);
  print_linked_list(&head);



}
