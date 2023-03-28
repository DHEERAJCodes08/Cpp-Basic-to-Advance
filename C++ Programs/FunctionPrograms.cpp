//WAP to print Prime Numbers Present between two numbers using functions

/* #include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){                     //Bool is datatype and  isPrime is the Function name  and The value of the i from the main is transfered to (num) in the function defination 
    for(int i=2; i<=sqrt(num); i++){                
        if(num%i==0){ 
            return false;
        }
    }
    return true;
}


int main(){
    int a;
    int b;

    cout<<"Enter the Numbers between whic the Prime we want to get ::";
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(isPrime(i)){  // ==true no need to write
        cout<<i<<endl;   //when the function defination ie at the top gets the return true then this part gets executed

        } 
    


         

    }  
    return 0;

} */

//write an Program to print the febonaccie  till the given number!

/* 
#include<iostream>
using namespace std;

void feba(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return ;

}  

int main(){
    int n;
    cout<<"Enter the no of Febanaccie You want ::";
    cin>>n;
    feba(n);
    return 0; 
} */



//WAP to find Factorial till the Given Number Using Functions

/* 
#include<iostream>
using namespace std;

int fact(int n){           //Since it returns an integer value so we use int 
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }  

    return factorial;  
 
}

int main(){
    int n;

    cout<<"Enter the no Whose Factorial we want::";
    cin>>n;

   int ans = fact(n);
    cout<<ans<<endl;
    return 0;

} */


//WAP to Display the Pascal triangle for the given Numberr


/* #include<iostream>
using namespace std;


int fact( int n){

    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    
    return factorial;
}

int main(){
    int n;

    cout<<"Enter the No to be Used :: ";
    cin>>n;

    for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){      // the value of j will be same for the each ittration as the condition of j becomes false at an perticular point!
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";

    }
    cout<<endl;
}

return 0;


}
 */



// This Program is to print the sum of first n natural numbers!

/* #include<iostream>
using namespace std;



int sum( int n){
    int Tsum=0;
    for(int i=1; i<=n; i++){
        Tsum=Tsum+i;

    }
    return Tsum;
}
int main(){
    int n ;
    cout<<"Enter the number"; 
    cin>>n;
    int ans=sum(n);
    cout<<ans<<endl;
    return 0;
}

   */

  

  //WAP to Check weather the given tripllate is an Pythogorious triplate
/* 
  #include<iostream>
  using namespace std;

  bool check(int x,int y,int z){

   int a=max(x, max(y,z));
   int b;
   int c; 
   if (a==x) 
   {
    b=y;
    c=z;
   }
   if (a==y) 
   {
    b=x;
    c=z;
   }
   if (a==z) 
   {
    b=x;
    c=y;
   } 

   if (a*a==b*b + c*c)
   {
    return true;
   }
   else{
    return false;

   }
   

  }
   


  int main()
{
    int x,y,z;
    cout<<"Enter the three value :: ";   
    cin>>x>>y>>z;

    if(check(x,y,z)){
        cout<<"Pythogorious triplate ";
    }
    
    else{
        cout<<"not an Pythogorious triplate";
    }
    }

 */





//WAP to convert The Numbers from Binary to Decimal!
#include<iostream>
using namespace std;

int BinarytoDecimal( int n){
    int x=1;
    int ans=0;

    while (n>0)
    {

    int y=n%10;
    ans+=x*y;
    x*=2;
    n=n/10;
}
return ans;

}

int main(){
    int n;
    cout<<"Enter the Binar Value ::";
    cin>>n;
    cout<<BinarytoDecimal(n)<<endl;

}



    













  






 