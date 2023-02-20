//This programs will be Bassically based for Functions in  C++ programing language!




// SYNTAX-->

/* #include<iostream>

void greet( paramerter1, parameter2, parameter3){
    
    // code of the program
}

int main(){
    . . . .
    greet();
    . . . .

} */



//Example 1)
/* 
#include<iostream>
using namespace std;

 void greet(){
    cout<<"HELLO";

}
                                // So this fonctio creates an output that is Hello!
int  main(){
    greet();

    return 0;

} */



// Here in Example 2) We Are going to provide the values from the main body !

/* #include<iostream>
using namespace std;

void displayNum( int x, float y)
{
    cout<<"\nThe int number is ::"<<x;
    cout <<"\nThe float number is ::"<<y;                   // We Are going to provide the values from the main body !


}

int main(){
    int num1;
    float num2;

    cout<<"\nEnter the integer value ::";
    cin>>num1;

    cout<<"\nEnter the Float value ::";
    cin>>num2;


    //function call
    displayNum(num1,num2);

    return 0;
}
 */







//Example 3) Addition of two Numbers Using Function!

#include<iostream>
using namespace std;

int displaysum( int x, int y)   //here we are using int because here we used return function
{
    return( x + y);
}

int main(){
    int add;

    add=displaysum(100, 50);         //function call  is just performed to perform Operation

    cout<< "100 + 50 :: \n"<<add;

    return 0;

    
}





