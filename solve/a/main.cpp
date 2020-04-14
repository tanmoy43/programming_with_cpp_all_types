#include <bits/stdc++.h>

using namespace std;


int main()
{
    int x;
    cin>>x;
      int xx[x+1];
    for(int i=1;i<x+1;i++)
    {
        xx[i]=pow(i,2);
        cout<<xx[i];
        if(xx[i]>9)
        {
            xx[i]=((xx[i]%10)*10)+(xx[i]/10);
        }
    }
    int n=sizeof(xx)/sizeof(xx[0]);
    sort(xx,xx+n);
        cout<<xx[1];
    for(int i=2;i<x+1;i++)
        cout<<" + "<<xx[i];


    return 0;
}
