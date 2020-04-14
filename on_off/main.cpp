/*
Case 1:
ON-5 times
OFF-3 times

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long long int x=0,y=0,z=0,k=1;
    while(scanf("%llu",&x)==1){
        if(x>=2){
        printf("Case %d:\n",k);
        x=pow(2,x);
        y=x*0.625;
        z=x-y;
        printf("ON-%llu times\n",y);
        printf("OFF-%llu times\n",z);
        k++;
        }
    }
    return 0;
}
