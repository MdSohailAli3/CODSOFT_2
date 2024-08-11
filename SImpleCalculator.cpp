//Simple-Calculator
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double num1, num2; 
    int choice;
    cout<<"Enter two numbers: "<< endl;
    cout<<"First Number:- ";
    cin>>num1;
    cout<<"Second Number:- ";
    cin>>num2;
    cout<<"Choose an operation to perform: "<< endl;
    cout<<"1. Addition"<<"\n"<<"2. Subtraction"<<"\n"<<"3. Multiplication"<<"\n"<<"4. Division"<< endl;
    cin>>choice;
    cout<<"You Choose: ";
    
    switch(choice){
    case 1:
           cout<<"Addition"<<"\n"<<"Result:- "<<num1+num2<<endl;
           break;
    case 2:
           cout<<"Subtraction"<<"\n"<<"Result:- "<<num1-num2<<endl;
           break;
    case 3:
           cout<<"Multiplication"<<"\n"<<"Result:- "<<num1*num2<<endl;
           break;
    case 4:
           cout<<"Division"<<"\n"<<"Result:- "<<num1/num2<<endl;
           break;
    default:
           cout<<"Wrong Choice Entered. "<<endl;                            
    }
    return 0;
}