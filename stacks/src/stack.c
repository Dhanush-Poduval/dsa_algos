#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void stack_linked(struct Node **head , int value){
  struct Node *new_node=maloc(sizeof(struct Node));
  struct Node *temp=*head;
  if(temp==NULL){
    new_node->value=value;
    new_node->next=NULL;
    temp=new_node;
  }
  while (temp->next !=NULL){
    temp=temp->next;
  };
  new_node->value=value;
  temp->next=new_node;
  new_node->next=NULL;
  printf("Inserted the values successfully \n");
};

void stack_linked_pop(struct Node **head){
  struct Node *temp=*head;
  struct Node *forward=NULL;
  while(temp->next->next!=NULL){
    temp=temp->next;
    next=temp->next;

  };
  temp->next=NULL;
  free(next);
  printf("Pop function succrssfully implemented\n");
  

};

void stack_linked_peek(struct Node *head){
  struct Node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  };
  printf("The node value for the peek function is %d \n",temp->value);
};
