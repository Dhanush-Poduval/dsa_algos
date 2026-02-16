#include "bubble.h"
#include<stdio.h>

void bubble_sort(int arr[],int n){
  int temp;
  for(int i=0;i<n;i++){
     for(int j=0;j<n-1-i;j++){
         if(arr[j]>arr[j+1]){
	   temp=arr[j];
	   arr[j]=arr[j+1];
	   arr[j+1]=temp;
	 }
     
     }
  
  }
  //display the final sorted array
  for(int m=0;m<n;m++){
   printf("%d",arr[m]);
   printf("\n");
  }

}
