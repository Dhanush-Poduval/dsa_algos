#include <stdio.h>
#include <string.h>
#include "least.h"


int main() {
  char s1[]="ABCBDAB";
  char s2[]="BDCAB";
  printf("Length of the least common subsequence is : %d\n",least_common(s1,s2));

}
