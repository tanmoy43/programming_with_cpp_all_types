#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, v1, x2, v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if((x1>x2 && v1<v2)||(x1<x2 && v1>v2)){

        int remainder = (abs(x1-x2) % abs(v1-v2));

        if(remainder==0){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }

    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
