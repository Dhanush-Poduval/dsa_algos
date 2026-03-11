#include <stdio.h>
#include "linked.h"
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
  struct Node *temp=*node;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  new_node->value=data;
  temp->next=new_node;
  new_node->left=temp;
  new_node->next=NULL;
  printf("Inserted the node with value %d at the end of the linked list \n",new_node->value);

};

void insert_middle(struct Node **node , int data,int position){
  struct Node *new_node=malloc(sizeof(struct Node));
  struct Node *temp=*node;
  while(temp->next->value !=position){
    temp=temp->next;
  };
  new_node->value=data;
  new_node->next=temp->next;
  new_node->left=temp;
  temp->next=new_node;
  printf("Node inserted in the middle with the elements %d in the linked list\n",data);
};

void print_linked_list(struct Node *node){
  while(node!=NULL){
     printf("%d",node->value);
     node=node->next;
  };
  printf("\n");

};

void reverse_linked_list(struct Node *node ){
  struct Node *curr =node;
  struct Node *prev=NULL;
  struct Node *next=NULL;
  while(curr !=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  };
  while(prev !=NULL){
    printf ("%d -> ",prev->value);
    prev=prev->next;
  };
  printf("NULL");
  printf("\n");

}
