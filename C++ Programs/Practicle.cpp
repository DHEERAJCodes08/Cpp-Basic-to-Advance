//This Program is To Display the Deatils like Name , mobile NO ,age of a person using Class and Object!

#include<iostream>
using namespace std;

class data{
    int age;
    char name[20];
    int Mobile;

    public:void set(){
        cout<<"\nEnter the Name::";
        cin>>name;

        cout<<"\nEnter the Age::";
        cin>>age;


        cout<<"\nEnter the Mobile Number::";
        cin>>Mobile;
    };


    void show(){
        cout<<"\n Name::"<<name;

        cout<<"\nAge::"<<age;

        cout<<"\nMobile Number::"<<Mobile;

    };
};


int main(){
    data f;

    f.set();
    f.show();

    return 0;
}