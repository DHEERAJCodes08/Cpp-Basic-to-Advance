// Exception HAndling ues Some types of keywoards such as ( try, throw, catch)

//Example 1
#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    float c;

    cout<<"Enter the values of a & b ::";
    cin>>a;
    cin>>b;

    try{
        if(b==0){
           throw b;

        }

        else{
            
            c=a/b;
            cout<<"The division Answer of a and b are ::"<<c;
        }
    }
    
        catch(int b){
            cout<<"\n Enter an Non-Zero value for the b :";
            cin>>b;
            return 0;
        }

    }


