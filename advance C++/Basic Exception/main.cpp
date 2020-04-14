#include <iostream>

using namespace std;

void mightgotwrong()
{
    bool error = true;
    if(error){
        throw "I am Tanmoy";
    }
}

int main()
{
    try
    {
    mightgotwrong();
    }
    catch(char const* a)
    {
        cout<<"error code: "<<a<<endl;
    }
    return 0;
}
