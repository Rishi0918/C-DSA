#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
char value= 'A';

    int i =1;
    while (i<=n)
    {
        int j=1;
        
        while (j<=n)
        {
                
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}