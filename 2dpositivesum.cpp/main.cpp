#include <bits/stdc++.h>

using namespace std;

int main()
{

    //freopen("text.txt","r",stdin);

    int r, c,sum=0;
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int v;
            cin>>v;
            if(v>0)
             sum+=v;
        }
    }
    cout<<"Positive sum : "<<sum<<endl;
    return 0;
}
    /*int r, c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
        }


    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
                if(a[i][j]>0){
                    sum+=a[i][j];
            }
        }
    }
    cout<<"Positive sum : "<<sum<<endl;
    return 0;
}*/
