#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stack_linked(struct Node **head , int value){
  struct Node *new_node=malloc(sizeof(struct Node));
  if(*(head)==NULL){
    new_node->value=value;
    new_node->next=(*head);
    *head=new_node;
  }
  new_node->value=value;
  new_node->next=*head;
  *head=new_node;
  printf("Inserted the values successfully \n");
};

void stack_linked_pop(struct Node **head){
  struct Node *temp=*head;
  (*head)=(*head)->next;
  free(temp);
  printf("Pop function succrssfully implemented\n");
  

};

void stack_linked_peek(struct Node *head){
  struct Node *temp=head;
  printf("The node value for the peek function is %d \n",temp->value);
};
