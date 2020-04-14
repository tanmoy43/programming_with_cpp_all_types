#include<bits/stdc++.h>

using namespace std;
long long d[999999];
int n, sum=1;

int recursion()
{
    for (long long  i=2; i<=99999; i++){
        for (long long  j=2; j<=i; j++)
        {
            if (i % j == 0&&i!=j){
              d[i]=d[i-1];
                break;}
            else if (i == j+1){
              d[i]=sum;
                sum*=i;
        }
        cout <<"Prime Factorial of "<<n<<" is = "<< sum*2 <<endl;
        sum=1;
}
}
}

int main ()
{
    recursion();
    while(scanf("%d", &n)!=EOF){
    cout<<d[n]<<endl;
    }


}
