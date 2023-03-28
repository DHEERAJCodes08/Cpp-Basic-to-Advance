// This Program is to demonstrate  the structure functio 

/*  #include<iostream>
 using namespace std;

 struct data
 {
    int a;
    float b;

 };

 int main()
 {
    struct data d;
    d.a=5;
    d.b=1.2;
    cout<<"\n"<<d.a;
    cout<<"\n"<<d.b;
     return 0;
 }
 */

// This program is to take the element from the user of variable present in Struct  and perform their sum and display the output!

#include<iostream>
 using namespace std;

 struct data
 {
    int a;
    float b;

 };

 int main()
 {
    int sum;
    struct data d1;
    cout<<"Enter the intiger value::";
    cin>>d1.a;

    cout<<"Enter the float value::";
    cin>>d1.b;

    cout<<"THE VALUES YOU ENTERED IS::\n";
    cout<<"\nd1.a::"<<d1.a;
    cout<<"\nd1.b::"<<d1.b;

    sum=d1.a+d1.b;
    cout<<"\n The sum of the number entered is ::"<<sum;


     return 0;
 }
