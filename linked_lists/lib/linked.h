#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node {
   struct Node *left;
   int value;
   struct Node *next;

};

void insert_head(struct Node **head ,int value);
void insert_tail(struct Node **head, int value);
void insert_middle(struct Node **head, int value);
void print_list(struct Node *head);

#endif
