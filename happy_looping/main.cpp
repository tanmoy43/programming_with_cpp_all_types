/*
sample input
2
7
5
sample output
-1 0 1
-1 0 1 2
-1 0 1 2 3
-1 0 1 2 3 4
-1 0 1 2 3 4 5
-1 0 1 2 3 4 5 6
-1 0 1 2 3 4 5 6 7

-1 0 1
-1 0 1 2
-1 0 1 2 3
-1 0 1 2 3 4
-1 0 1 2 3 4 5
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b=1, t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        printf("case:%d\n",b);
        for(int i=1; i<=a; i++){
            for(int j=-1; j<=i; j++){
                printf("%d ", j);
            }
            printf("\n");
        }
        b++;
    }
    return 0;
}
