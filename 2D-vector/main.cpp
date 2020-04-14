#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    // Your code here!
    vector<vector<int> > vect;
    int k, n, leftsum=0, rightsum=0;
    cin>>n;
    for(int i = 0; i<n; i++){
            vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            cin>>k;
            temp.push_back(k);
        }
        vect.push_back(temp);
    }

    for (int i = 0; i < vect.size(); i++) {
        leftsum+= vect[i][i];
        rightsum+= vect[i][n-1-i];
    }
    cout<<abs(leftsum-rightsum)<<endl;

    return 0;

}
