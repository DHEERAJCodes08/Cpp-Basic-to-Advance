//This program is to Display  the functioning and the uses of this Pointer!

// Basic Example of this Pointer ,, to display the value using this pointer !

/* 
#include<iostream>
using namespace std;

class data {

    int a;
    int b;

    public: void set(){

        a=10;
        b=20;
    };

    void show(){

        cout<<"\nValue of a ::"<<a; 
        cout<<"\nValue of b ::"<<this->b;      //Here how this Pointer is Used!
    };
};

int main(){
    data d;
    d.set();
    d.show();

    return 0;
} */









//Example To call a function using this Pointer  !

/* #include<iostream>
using namespace std;

class data 
{
    int y;
    int z;
    public: void setdata(){

        y=100;
        z=200;
        
        this->Show();            // this Statement Calls the  Show Function inside the set function !


    };

    void Show(){
        cout<<"Value of y is ::"<<y;
        cout<<"\nValue of z is ::"<<z;
    }
};

int main(){
    data f;

    f.setdata();   //So here we are only calling the Set function but the Show function is also displayed because i the Setdata function we have called Show function using this Pointer!
    return 0;
}
 */





//Example  to  Initialize the Variables Using this Function !

/* 
#include<iostream>
using namespace std;


class data {

    int x;
    int y;

    public: void set( int x, int y){
        x = x;
        y = y;            //Here the confusion is being Created in the Copiler  of ( Konsa X kaha ka hai!!)
    }


    void show(){

        cout<<"Value of X ::"<<x;              //Here IT gives an unexpected value Because of the confusion genrated in the Compiler to overCome this we use this Pointer!
        cout<<"\nValue of Y ::"<<y;

    };
};


int main(){
    data d;

    d.set(10,20);
    d.show();

    return 0;
}
 */




// So to Overcome Such Kind of the Confuion And the Unexpected Value We use THis Pointer !!

#include<iostream>
using namespace std;


class data {

    int x;
    int y;

    public: void set( int x, int y){
        this->x = x;      //here the Confusion is Solved  ,  here the variable x Represent the class x  And the value x represents the Function 
        this->y = y;    

        //or

/*      this->x = y;     
        this->y = x;        */    
    }


    void show(){

        cout<<"Value of X ::"<<x;              
        cout<<"\nValue of Y ::"<<y;

    };
};


int main(){
    data d;

    d.set(10,20);
    d.show();

    return 0;
}

