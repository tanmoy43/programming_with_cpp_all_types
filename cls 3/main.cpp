#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=40 && a<=50){
        printf("D");
    }
    else if(a>=51 && a<=60){
       printf("C");
    }
    else if(a>=61 && a<=70){
       printf("B");
    }
    else if(a>=71 && a<=79){
       printf("A");
    }
    else if(a>=80 && a<=100){
        printf("A+");
    }
    else if(a<40){
        printf("F");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
