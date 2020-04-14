#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter any number: ";
    while((cin>>a)!=EOF){
    if(a>0){
        cout<<"The Number is Positive";
    }
    else{
        cout<<"The number is negative";
    }
    }
    return 0;
}
