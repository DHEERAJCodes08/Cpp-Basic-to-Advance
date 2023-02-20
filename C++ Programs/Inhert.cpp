//This program is to Learn The Inheretance in C++

//There Are basically 5 Types of Inheretance -->>>>
 // 1) Single Level Inheretance
 // 2) Multi Level Inheretance
 // 3) Multiple Base Inheretance
 // 4) Hierarchical Inheretance
 // 5) Hybrid Inheretance



 // 1) In single the properties of base elements are present in the Child element !!

 //Example-->

/*  #include<iostream>
 using namespace std;

 class Grandfather {
    public:void set(){
              cout<<"\n I have a Bicycle";
    };
 };

 class Father:public Grandfather{
    public:void show(){
        cout<<" \nI have a Car";
    };
 };

 int main()
 {
    Father f;
    f.show();
    f.set();
    return 0;
 } */



 /*  This is an Example of Multi Level Inheritance */
 //Example-->

/*  #include<iostream>
 using namespace std;

 class Grandfather{
    public:void set(){
        cout<<"\nI have a Bicycle";
    };
 };

 class Father:public Grandfather{
    public: void show(){
        cout<<"\nI have a Bike";
    };
 };

 class Son:public Father{
    public: void element(){
        cout<<"\nI have a Car";
    };
 };

 int main(){
    Son s;
    s.set();
    s.show();
    s.element();
    return 0;
 } */



 //This is an program for Multi Bases Inheritace in C++

// Example-->
/* #include<iostream>
using namespace std;

class Grandfather{
   public:void set(){
      cout<<"\nI have a Bicycle";

   };
};

class Father{
   public:void show(){
      cout<<"\nI have a Bike ";
   };
};

class Son :public Grandfather, public Father{                          Here the Properties of Two classes are inhereted into the Single class ie Class Son
   public: void element(){
      cout<<"\nI have a Car";

   };
};

int main(){
   Son s;
   s.set();
   s.show();
   s.element();

   return 0;
} */







//This Program is  for  the Herecherial  Inheritance
//Example-->

/* 
#include<iostream>
using namespace std;

class Grandfather {
   public:void set(){
      cout<<"\nI have a Bicycle";

   };
};


class Father :public Grandfather {

   public:void show(){
      cout<<"\nI have a Bike";
   };

};


class Son :public Grandfather{
   public:void element(){
      cout<<"\nI have a Car";
   };
};


int main(){
   Son s;
   Father f;
   s.set();
   s.element();
   f.show();
   f.set();

   return 0;
} */





//This Program is  to implement  the Hybrid Inheretance in C++!

//Example-->

#include<iostream>
using namespace std;

class Grandfather {
    public:void set(){                /* Since here We face An Ambigous Error ,, To Overcome This Error We use The Virtual Keywoard */
      cout<<"\nI have a Bicycle";

    };
};

class Father :public Grandfather{      /* here we use Virtual Keywoard insted of Public */
   public:void show(){
      cout<<" \nI have a Bike";
   };
};


class Mother{              /* here we use Virtual Keywoard insted of Public */
   public:void element(){
      cout<<"\n I have a Car";
   };
};


class Son:public Father, public Mother{
    public: void display(){
      cout<<"\n I have an Aeroplane";
    };
};

int main(){

   Son s;
   s.set();
   s.show();
   s.element();
   s.display();

   return 0;

}