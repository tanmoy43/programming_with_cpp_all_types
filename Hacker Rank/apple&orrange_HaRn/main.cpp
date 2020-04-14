#include<bits/stdc++.h>

using namespace std;

int main(){
    int s, t, a, b, m, n, temp[m], temp1[n], ac, oc;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    for(int i=0; i<m; i++){
        scanf("%d", &temp[i]);
        if((a+temp[i])>=s && (a+temp[i])<=t){
            ac++;
        }
    }

    for(int i=0; i<n; i++){
        cin>>temp1[i];
        if((b+temp[i])>=s && (b+temp[i])<=t){
            oc++;
        }
    }
    printf("%d\n%d\n", ac, oc);
    return 0;
}
\
