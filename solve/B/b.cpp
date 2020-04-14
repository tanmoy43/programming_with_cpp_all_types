#include<bits/stdc++.h>
using namespace std;

int hattrikcheck(int a, int b, int c)
{
    if(a==b && b==c && c==a)
        cout<<"Hat-Trick!\n";
    else
        cout<<"Try again.\n";
}

int main()
{
    int a, b,c;
    while(scanf("%d %d %d", &a, &b, &c)==3){
        hattrikcheck(a,b,c);
    }
}
