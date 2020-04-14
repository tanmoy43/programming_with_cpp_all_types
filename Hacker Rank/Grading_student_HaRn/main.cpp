#include <iostream>

using namespace std;

int main()
{
    int n;
    //int size_array= (int)( sizeof(diff) / sizeof(diff[0]));
    cin>>n;
    int diff[n];
    for(int i=1; i<=n; i++){
        cin>>diff[i];
    }
    for(int i=1; i<=n; i++){
        //cout<<diff[i];

        /*if(diff[i]>=38){
        if(diff[i]%5>=3){
            diff[i]+=(5-(diff[i] % 5));
            cout<<diff[i]<<endl;
        }
        else{
            cout<<diff[i]<<endl;
        }
      }else{
            cout<<diff[i]<<endl;
        }*/
        //cout<<diff[i]+=diff[i];

    }
    return 0;
}


