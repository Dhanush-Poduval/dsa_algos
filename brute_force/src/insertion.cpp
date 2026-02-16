#include "insertion.h"
#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
   int key;
   for(int i=1;i<n;i++){
      int j=i-1;
      key=arr[i];
      while(j>=0 && key<arr[j]){
        arr[j+1]=arr[j];
	j--;
      
      }
      arr[j+1]=key;
   
   }

   //printing the sorted array
   for(int m=0;m<n;m++){
     cout<<arr[m]<<endl;
   
   }


}
