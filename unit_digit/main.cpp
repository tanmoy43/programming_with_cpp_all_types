#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a=0, b=0, c=0;
    long long sum=0;
    int counta=0, countb=0;
    scanf("%lld %lld", &a, &b);
    /*while(a!=0){
        a/=10;
        counta++;
    }*/
    while(b!=0){
        b=c;
        c/=10;
        countb++;
    }
    cout<<countb<<endl;
    //cout<<b<<endl;

    if(countb>1){
        sum=b/4;
        printf("%lld", sum);
    }
}
