#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, count=0;
    int arr[1,3,6,11,18,29,42,59];
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        for(int i=a; i<=b; i++){
            if(i%2==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
