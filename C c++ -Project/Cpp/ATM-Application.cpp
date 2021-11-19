#include<iostream>
using namespace std;

void showMenu(){
cout<< "*****MENU*****"<<endl;
cout<<"\n";
cout<< "1. Check Blance"<<endl;
cout<< "2.Deposite"<<endl;
cout<< "3.Withdraw"<<endl;
cout<< "4.Exit"<<endl;
cout<< "*************************"<<endl;
}

int main()
{

    //Check Balance, deposite, withdraw,showmenu
    int option;
    double balance=500;

    do{
    showMenu();
    cout<< "Enter Option:";
    cin>>option;
    system("cls");
    switch(option){
    case 1:cout<< "Balance Is: "<<balance<<"$"<<endl;break;

    case 2:cout<<"Deposit Amount:";
    double depositeAmount;
    cin>>depositeAmount;
    balance += depositeAmount;
    break;

    case 3:cout<<"withdraw Amount:";
    double widthdrawAmount;
    cin>>widthdrawAmount;

    if(widthdrawAmount <= balance)
        balance -= widthdrawAmount;
    else
        cout<<"Not Enough Money"<<endl;
        break;
    }

    }while(option!=4);
    system("pause>0");

}
