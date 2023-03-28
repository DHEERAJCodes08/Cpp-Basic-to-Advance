// Operatr overloading is used when any operator performen multiple operation 
// there are tw types of operation >>>>
// 1)Unary operator for Example ( a++, ++a, +a ... etc ) contains 1 Operands
// 2) Binary operator  for Example ( a+b , a-b ...  etc) Contains 2 Operands


// this is an example of Unary operator!


#include<iostream>
using namespace std;

class data{
     int x,y,z;   //this variables are use only in the Class not in main  * this is the most important point!

     public: void elements(){
       cout<<"\nEnter The two elements who's sum you want:";
       cin>>x>>y;

     };

     public: void operator +(){                       //Unary operator is Written in THis way!!!!!
        z=x+y;
        cout<<"\nThe sm of the given numbers is :"<<z;

     };

};

int main(){
    data d;
    d.elements();
    //d.operator+();  // or WE can use +d;
    +d;
    return 0;
}












