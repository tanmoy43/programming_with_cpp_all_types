#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,b;
while(scanf("%lld",&n)==1)
{
    b=pow(10,n);
    b=b+1;
    b=b%11;
    printf("%ld\n",b);
}
    return 0;
}
