#ifndef KNAPSACK_H
#define KNAPSACK_H

struct items {
	int value;
	int weight;
	int ratio;

};

void knapsack_h(struct items *item ,int n);
void sort(struct items *item , int n);

#endif
