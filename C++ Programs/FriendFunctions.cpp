//This Program To displAY wHAT IS fRIEND function and how it is used !


#include<iostream>
using namespace std;

class Box{

    private:
     int length;
    

    friend int PrintLength(Box);    //Friend Function 

};

int PrintLength(Box b)
{

    b.length=10;
    return b.length;
}

int main(){
    Box b;
    cout<<"Length is ::"<<PrintLength(b)<<endl;

    return 0;
    
}