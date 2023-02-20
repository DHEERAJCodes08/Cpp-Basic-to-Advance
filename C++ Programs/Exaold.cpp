#include<iostream>
using namespace std;

class data{
    int z;      //this declaration is only valid in theis class!

    public: void area( int s)
    {
        z=s*s*s;
        cout<<"Area of cube :"<<z;
    };


    public: void area(int l,int b, int h){
        z=l*b*h;
        cout<<"Area of rectangle is  :"<<z;

    }
};


int main(){
    int s,l,b,h;   //this declaration is only valid for main body it donot works in class!
    data d;
    cout<<"Enter the side of the cube:";
    cin>>s;
    d.area(s);   //function call   //This values are catched into " s " so we need to throw that value in the function;

    cout<<"\nEnter the Length of Rectangle:";
    cin>>l;
    cout<<"\nEnter the bredth of Rectangle:";
    cin>>b;
    cout<<"\nEnter the height of Rectangle:";
    cin>>h;
    d.area(l,b,h);





    return 0;
}