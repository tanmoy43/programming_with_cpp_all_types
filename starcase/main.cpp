#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("text.txt", "r", stdin);
    int row;
    //cout<<"Enter row number : ";
    scanf("%d", &row);
    for(int i=1; i<=row; i++){
        for(int j=i; j<row; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"#";
        }
        cout<<"\n";
    }


    return 0;
}
