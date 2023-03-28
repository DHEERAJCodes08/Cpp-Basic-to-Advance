// There are basically two types of overloading in the C++!
// The 1)  is function overloading    2)Operator overloading





//This program is with Same function name  but with different no of Arguments!

 /*  Here when there are two similar kind of functions names  then either their no of arguments should be different or their data types should be different */


/* #include<iostream>
using namespace std;
  class data
  {

    int a,b,c,z;

  public:void set(int p,int q) //Function 1
         {
            a=p;
            b=q;                           
            z=a+b;
            cout<<"\n"<<z;

         };
 
         public:void set( int p,int q, int r){  //Function 2
            a=p,b=q,c=r;
            z=a+b+c;
            cout<<"\n"<<z;
         };

  };

 
  
 int main(){

    data d;
    d.set( 20,30);
    d.set(10,20,30);
    

    return 0;

  }
 */


#include<iostream>
using namespace std;

class data {
    int a,c,e;
    float b,f;

    public:void set( int x,double d){  // here we need to use "double" to store the value of float!
        a=x;
        b=d;
        f=a+b;
        cout<<"\n"<<f;

    };

    public:void set( int x, int y){
        a=x,c=y;
        e=a+c;
        cout<<"\n"<<e;


    };
};

int main(){
    data d;
    d.set(1, 1.5);
    d.set(5,8);

    return 0;
}
















  
  