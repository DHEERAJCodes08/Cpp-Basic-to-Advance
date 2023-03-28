// When an Variable is declare in the form of refrence VAriable then its becomes the another name for the Exxisiting variable it is declared as " & " in the Declaretion !

// if the function recives the refrence then the Variable value can be change !

//Example : 

/* #include<iostream>
using namespace std;

int main(){
    

    //Normal value of x 
   int x=10;
    cout<<"Normal value of X is ::" <<x<<endl;

    //Creating an refrence for the Var 
    int& ref = x;


    ref=20;
    cout<<"Updated Value of the Var USing refrence :: "<<x<<endl;

    //Cahngin the Value of x to 30 !

    x=30;
    cout<<"The Last Updated  value of the x is ::"<<x<<endl;


    return 0;


}
 */


//Example 2 : 


#include<iostream>
using namespace std;

void swap(int& first ,int& second){
    int temp=first;
    first=second;
    second=temp;
}

int main(){
    int a=2, b=3;
    swap(a,b);
    cout<<a<<" "<<b; //Values After Swapping
    return 0;

}