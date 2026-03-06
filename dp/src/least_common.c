#include <stdio.h>
#include "least.h"
#include <string.h>


int least_common(char s1[] , char s2[]){
  int n,m;
  n=strlen(s1);
  m=strlen(s2);
  struct lcp dtable[n+1][m+1];
  for(int i=0;i<=n;i++){
     dtable[i][0].value=0;
  }
  for(int j=0;j<=m;j++){
     dtable[0][j].value=0;
  }

  for(int i=1;i<=n;i++){
   	for(int j=1;j<=m;j++){
	   if(s1[i-1]==s2[j-1]){
	     dtable[i][j].value=dtable[i-1][j-1].value+1;
	   }else {
	     dtable[i][j].value=(dtable[i-1][j].value>dtable[i][j-1].value)?dtable[i-1][j].value : dtable[i][j-1].value;
	   }
	}
  }
  return dtable[n][m].value;

}
