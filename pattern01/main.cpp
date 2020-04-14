/*
11111
2222
333
44
5
44
333
2222
11111
*/
#include<iostream>
using namespace std;

int main()
{
    int a, i, j, m, n;
    cin>>a;
    for (i=1; i<=a; i++){
        for(j=a; j>=i; j--){
            cout<<i;
        }
        cout<<endl;
    }
    for (m=i-2; m>=1; m--){
        for(n=a; n>=m; n--){
            cout<<m;
        }
        cout<<endl;
    }
}
