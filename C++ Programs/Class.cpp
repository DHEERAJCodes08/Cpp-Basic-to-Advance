/* This program is to insert Class and object  in C++ */

/* #include<iostream>
using namespace std;

class Data {
    public: int a;
            int b;

};

int main(){
    int sum ;
     class Data d;
    cout<<"Enter the  1st  integer::";
    cin>>d.a;
    cout<<"Enter the second integer::";
    cin>>d.b;

    sum=d.a+d.b;
    cout<<" The sum of the Given integers is::"<<sum;

}  */












// In this program we have  created two objects of the Same Class ie d1 and d2 !

/* #include<iostream>
using namespace std;

class data {
    public: int a;
            float b;

};
 int main(){
     class data d1,d2;

     d1.a=5;
     d1.b=10.5;
     d2.a=6;
     d2.b=8.2;


     cout<<"\n"<<d2.b;
     cout<<"\n"<<d2.a;
     cout<<"\n"<<d1.b;
     cout<<"\n"<<d1.a;

     return 0;

     
 } */









 // This  program is to initialize the variable inside the Class through creating the function !

/* 
 #include<iostream>
 using namespace std;

 class data {

    int a;
    float b;

    public: void set()
    {
        a=10;     //here we are initialising the  the variables in the newealy created class!
        b=5.5;   
        cout<<"\n"<<a;
        cout<<"\n"<<b;
    };
 };

    int main()
    {
    
    data d;
    d.set();
    return 0;
    }
  */



// This progrm is to initiliaze the varieable in the class and call it using two function!

 /* #include<iostream>
 using namespace std;

 class data {
    int a;
    float b;

    public:void set()  //This function is used for  initializing!
    {
        cout<<"Enter the integer value::";
        cin>>a;

        cout<<"Enter the Float value::";
        cin>>b;

    };

    public:void show() //this function is ued for calling!
    {
        cout<<"The integer value is ::"<<a;

        cout<<"The float value is ::"<<b;
    };
 };
     int main()
 {
    data d;
    d.set();
    d.show();

    return 0;
 }
 */







//This progra is to take the values in one kind of variables and then transfer the values to the another varables !

#include<iostream>
using namespace std;

class data {
    int a;
    float b;

    public: void setdata( int X, float Y) //this is used for storing data for temparary purpases!
    {
        a=X;
        b=Y;
    };

    public:void show(){
        cout<<a;
        cout<<"\n"<<b;

    };


};

int main()
{
    data d;
    d.setdata(10, 2.5);
    d.show();
}