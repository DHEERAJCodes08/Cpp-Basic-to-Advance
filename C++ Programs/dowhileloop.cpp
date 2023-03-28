 /* The program is to print the following number series from 0  till  the user given number by using dowhile loop */

#include<iostream>
using namespace std;

int main()
{ 
    int i=0, num;
    cout<<"Enter the number till where we want the series printed::";
    cin>>num;
    cout<<"This is the required serice of the input";
    do{
        cout<<"\n"<<i;
        i++;

    }
    while (i<=num);
}