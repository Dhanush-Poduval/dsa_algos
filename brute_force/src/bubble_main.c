#include <stdio.h>
#include "bubble.h"
int main() {
 int n;
 printf("Enter the size of the element");
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 };
 bubble_sort(arr,n);
}

