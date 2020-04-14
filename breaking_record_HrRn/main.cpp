#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> score;
    int n, k;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>k;
        score.push_back(k);
    }
    int highscore = score[0];
    int lowscore = score[0];
    int highscoreBroken=0;
    int lowscoreBroken=0;

    for(int i=1; i<n; i++){
        if(score[i]<lowscore){
            lowscore = score[i];
            lowscoreBroken++;
        }
        else if(score[i]>highscore){
            highscore = score[i];
            highscoreBroken++;
        }
    }
    cout<<highscoreBroken<<" "<<lowscoreBroken<<endl;
    return 0;
}
