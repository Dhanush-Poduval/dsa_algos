#include <iostream>
#include "quick.h"
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of elements "<<endl;
  cin>>n;
  int arr[n];
  int high;
  high=n;
  int low=0;
  for(int i=0;i<n;i++){
   cout<<"Enter the "<<i+1<<" Element"<<endl;
   cin>>arr[i];
  }
  quick_sort(arr,low,high);

}
