//This Program is to Demonstrare  the Abstract Class and its Virtual Function !

// Example-->

#include<iostream>
using namespace std;

class Data{         //Since It is An Abstract Class Its Object Cannot be Created

    public:
    virtual void show()=0;               // the Function Name Should be Same 
                                        // NO Body is present for Pure virtual Function
                                        
};


class Data2 :public Data{

    public:void show() {                // As that of the Derived Class
        cout<<"BIT";


    }

    
};

int main(){
    Data2 d1;

    
    d1.show();
    return 0;
}