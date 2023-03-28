 
  /* The program is to print the following number series from 0  till  the user given number by using while loop */

#include<iostream>
using namespace std;
int main()
{
    int i=0,num;
    cout<<"Enter the no till where you want to print the number series ::";
    cin>>num;
    cout<<"The required number series is >>";

    while (i<=num)
    {
        cout<<"\n"<<i;
        i++;
    }
    
    
    return 0;
}