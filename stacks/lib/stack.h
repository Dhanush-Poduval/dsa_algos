#ifndef STACK_H
#define STACK_H
struct Node {
  int value;
  struct Node *next;

}

void stack_linked(struct Node **head,int value);
void stack_linked_pop(struct Node **head );
void stack_linked_peek(struct Node *head);

#endif

