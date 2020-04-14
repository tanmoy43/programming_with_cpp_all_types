#include <iostream>
#include <stdlib.h>

using namespace std;
int total = 100000, withdrawaount, depositamount;
int deposit()
{
    cout<<"Enter your deposit amount: ";
    cin>>depositamount;
    cout<<"Your deposit amount is:"<<depositamount<<" TK"<<endl;
    total+=depositamount;
    cout<<"Your Total amount is:"<<total<<" TK"<<endl;
}
int withdraw()
{
    cout<<"Enter your withdraw amount: ";
    cin>>withdrawaount;

    if(withdrawaount<=total ){
        if(withdrawaount>99){
        total-=withdrawaount;
        cout<<"Your Total amount is:"<<total<<" TK"<<endl;
        }
        else{
            cout<<"Sorry! Your minimum withdraw amount is: 100 TK"<<endl;
        }
    }
    else{
        cout<<"Sorry! You have insufficient balance."<<endl;
    }
}
int checkbaance()
{
    cout<<"Your Total Balance is: "<<total<<" TK"<<endl;
    cout<<endl;
}
int out()
{
    cout<<"-----------------------Thank you for staying with us------------------------"<<endl;
    exit(0);
}

int error()
{
    cout<<"Error input!";
}


int main()
{
    int n;
    while(1){
    cout<<"please enter the number"<<endl;
    cout<<"1. for deposit"<<endl;
    cout<<"2. for withdraw"<<endl;
    cout<<"3. for check the balance"<<endl;
    cout<<"4. exit"<<endl;

    cin>>n;
    if(n==1){
        deposit();
        cout<<endl;
    }
    else if(n==2){
        withdraw();
        cout<<endl;
    }
    else if(n==3){
        checkbaance();
        cout<<endl;
    }
    else if(n==4){
        out();
    }
    else{
        error();
        cout<<endl;
    }
  }

    return 0;
}
