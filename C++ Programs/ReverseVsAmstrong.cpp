// this Program is to find the Reverse of the  Given Number From the user !!

/* #include<iostream>
using namespace std;

int main() {

int n;
cout<<"Enter the Number to be Reversed ::";      //Enterd no = 1234
cin>>n;

int reverse=0;
int lastdigit;

while(n>0){

    lastdigit=n%10;
    reverse=reverse*10 + lastdigit;
    n=n/10;


}

cout<<"The Reverse is ::"<<reverse<<endl;       //Resut = 4321

return 0;

} */








// This Program is to find the Amstrong Number or Not !

#include<iostream>
using namespace std;

int main(){

    int n,lastbit;
    
    cout<<"Enter the Number to Check :: ";
    cin>>n;

    int amst=0;
    int orignalN=n;

    while(n>0){
        
        lastbit=n%10;
        amst=amst + lastbit*lastbit*lastbit;
        n=n/10;

    }
    
    //Just to check weather the Code is running Properly or Not!
    cout<<"The Total is ::"<<amst<<endl;


    if(orignalN==amst){
        cout<<"The given no is Amstrong number";
    }
    
    else{
        cout<<"The given no is not Amstrong";
    }


    return 0;
    
}