#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    char op;

    cout<<"enter the value of a: ";
    cin>>a;
    cout<<endl;

    cout<<"enter the value of b: ";
    cin>>b;
    cout<<endl;

    cout<<"enter the operation which is to be performed: ";
    cin>>op;
    cout<<endl;

    switch (op)
    {
    case '+':
        cout<<(a+b)<<endl;
        break;
    
    case '-':
        cout<<(a-b)<<endl;
        break;

    case '*':
        cout<<(a*b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;    
    default:
    cout<<"Please enter a valid operator.";
        break;
    }


}