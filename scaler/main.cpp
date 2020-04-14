/*
Sample Input
3 4
5 5
Sample Output
1
Balanced
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
    if(a==b){
        printf("Balanced\n");
    }
    else{
        printf("%d\n",abs(a-b));
    }
  }
}
