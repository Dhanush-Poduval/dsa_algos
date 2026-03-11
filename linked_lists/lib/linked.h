#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
   struct Node *left;
   int value;
   struct Node *next;

};

void insert_head(struct Node **head ,int value);
void insert_tail(struct Node **head, int value);
void insert_middle(struct Node **head, int value,int pos);
void print_linked_list(struct Node *head);
void reverse_linked_list(struct Node *head);
void delete_head(struct Node **head);
void delete_tail(struct Node **head);
void delete_middle(struct Node **head , int position);
#endif
