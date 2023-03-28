//This Program is to Display The diffference beetween Static Binding and Dynamic binding !

// BY default the C++ matches   a function call to function defenation at compile time ie static BInding
//Where as  in Dynamic Binding the  Function Call  matches the Function Defenation in Runtime !

//due to which the Static binding is Faster than the  Dynamic Binding !

//Dinamic Binding is Bassically Done With The use of virtual class but it can also be done with out use of virtual class!


//Example of Dynamic Binding :

#include<iostream>
using namespace std;

 
class Data{

public:
void  Add( int x, int Y){                 //Function Defination
    cout<<"\nAddition  is ::"<<x+Y;

}

void Sub( int X, int Y){                  //Function Defination
    cout<<"\nSubstraction is ::"<<X-Y;

}

};

int main(){
    Data ob;
    ob.Add(10,20);  //Function Call
    ob.Sub(20,40);  //Function Call
    return 0;


}







