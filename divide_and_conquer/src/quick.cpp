#include <iostream>
#include "quick.h"

using namespace std;

int pivot(int arr[],int low , int high){
	int piv=0;
	piv=arr[high];
	int i=low-1;
	for(int j=low;j<high;j++){
	   if(arr[j]<piv){
             i++;
	     swap(arr[i],arr[j]);
	   }
	}
	swap(arr[i+1],arr[high]);
	return i+1;



}


void quick_sort(int arr[],int low , int high){
    int piv;
    if(low<high){
     piv=pivot(arr,low,high);
  
     quick_sort(arr,low,piv-1);
     quick_sort(arr,piv+1,high); 
    }

    for(int i=0;i<high;i++){
      cout<<arr[i]<<endl;
    }

}
