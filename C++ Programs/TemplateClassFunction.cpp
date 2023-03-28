//In this tutorial, we will learn about class templates and Function Template in C++ with the help of examples.

//Templates are powerful features of C++ which allows us to write generic programs. 
//we can use class templates to create a single class to work with different data types.

//Syntax :

/* template <typename T>
T functionName(T parameter1, T parameter2, ...) {
    // code
}

//to Call it

functionName<dataType>(parameter1, parameter2,...);


 */



//Example  for Function template :



/* 
#include<iostream>
using namespace std;

template <class T> T Sum( T x, T y)
{
    return(x + y);
}

int main(){
    cout<< Sum<int>(3,7)<<endl;
    cout<< Sum<double>(3.5,7.2)<<endl;


    return 0;
}


 */


//Example :


/* 
#include<iostream>
using namespace std;

template <class T> T Squareof(T a)
{
    return(a*a);
}

int main(){
    cout<<Squareof<int>(5)<<endl;
    cout<<Squareof<double>(5.5)<<endl;


    return 0;
}
 */






//Example : its an EXample for Class Template


#include<iostream>
using namespace std;

template<class T>

class Data{
    private: T num1,num2;      //As this are Private so it cannot be used by the function so we use in class to perform operation

    public:Data( T n1, T n2){  //Parameters are Passed Here inside n1 and n2 !  
        num1= n1;
        num2= n2;

    }
     void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Data<int> intCalc(2, 1);    //Syntax : Classname<datatype> Object(Parameters1, Parameters2)

    cout << "Int results:" << endl;
    intCalc.displayResult();     //Calling the Function using the Object
    return 0;


}








    







