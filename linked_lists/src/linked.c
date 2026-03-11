#include <stdio.h>
#include "linked_list.h"
#include <math.h>

void insert_head(struct Node **node,int data){
  struct Node *new_node=malloc(sizeof(struct Node));
  new_node->left=NULL;
  new_node->next=*node;
  new_node->value=data;
  *node=new_node;
  printf("Inserted element with value %d inserted at the head of the linked list \n",new_node->value);
};

void insert_tail(struct Node **node , int data){
  struct Node *new_node=malloc(sizeof(struct Node));
  while(node->next!=NULL){
    node=node->next;
  }
  node->next=new_node;
  new_node->left=*node;
  new_node->next=NULL;
  printf("Inserted the node with value %d at the end of the linked list \n",new_node->next);

};

void insert_middle(struct Node **node , int data,int position){
  struct Node *new_node=malloc(sizeof(struct Node));
  while(node->value !=position){
    node->next=node;
  };
  new_node->value=data;
  new_node->next=node->next->next;
  new_node->left=*node;
  node->next=new_node;
  printf("Node inserted in the middle with the elements %d in the linked list\n",data);
};

void print_linked_list(struct Node *node){
  while(node!=NULL){
     printf("%d",node->value);
  };

};
