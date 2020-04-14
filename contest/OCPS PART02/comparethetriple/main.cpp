#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a, b;
    int totalalice=0, totalbob=0;
    for(int i=0; i<3; i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0; i<3; i++){
        int k;
        cin>>k;
        b.push_back(k);
    }
    for(int j=0; j<a.size(); j++){
        if(a.at(j)>b.at(j)){
            totalalice++;
        }
        else if(a.at(j)<b.at(j)){
            totalbob++;
        }
        else{
            continue;
        }
    }
    cout<<totalalice<<" "<<totalbob<<endl;
    return 0;
}
