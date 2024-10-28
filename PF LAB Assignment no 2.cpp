#include<iostream>
using namespace std;
int main(){
float balance=1000;
float deposit=1000;
float withdrawl=500;
cout<<"enter the intial balance:"<<balance<<endl;
cout<<"enter deposit amount:"<<deposit<<endl;
cout<<"enter withdrawl amount:"<<deposit<<endl;
balance +=deposit;
cout<<"balance after deposit:"<<balance<<endl;
balance -=withdrawl;
cout<<"balance after withdrawl:"<<balance<<endl;
}