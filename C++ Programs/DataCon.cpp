// This topic will Be Basically  Related to Data Converson
// Data conversion is done basically by two ways ie 1) Implecit Data Conversion    and    2)Explecit Data Conversion

//Implicit Data Conversion is genereally done by the Complier!!

//Example ->

/* #include<iostream>
using namespace std;

int main(){
    int a;
    float b;                                                       //here we converted integer Value to float

    a=5;
    b=a;
    cout<<"\nthe Normal Value of a is  ::"<<a;
    cout<<"\nThe Float Value of a is ::"<<b;
    return 0;
    
} */




//Example ->

/* #include<iostream>
using namespace std;

int main(){                                          //Here we have Converted Float value in Integer it Takes Only The Number before Decimal point
    int a;
    float b;

    b=2.25;
    a=b;

    cout<<"\nthe Orignal value of float is ::"<<b;
    cout<<"\nthe changed value Integer  is ::"<<a;
    return 0;
}
 */



//Now this Examples Are for The Explicet Data Conversion which is not done by the Compiler It is Done By the User !!

// Example ->

#include<iostream>
using namespace std;

int main(){
    int x;
    double y;
                                                    //Here data is converted By the user from  Float to integer by using x=int( float variale name)  !!!
    y=2.25;
    x=int(y);
    cout<<"\nInteger of y is::"<<x;
    cout<<"\nFloat of y is::"<<y;
    return 0;
}





