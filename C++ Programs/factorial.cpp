/* This program is to find the Factorial of the given number by the user */

#include<iostream>
using namespace std;

int main(){
    int i,n,fact=1;
    cout<<"Enter the number for factorial ::";
    cin>>n;
    for (i=1; i<=n; i++)
    {
        fact= fact*i;
        
    }
    cout<<"The factorial of the given number is ::"<<fact;

    return 0;

}