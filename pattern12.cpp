#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int i=1;
    char value = 'A';

    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<value;
            j++;
        }
        cout<<endl;
        value++;
        i++;
        
    }
    
}