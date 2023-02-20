  
  //this program is to demonstrate simple look of an Array with size of an array is 10

/* #include<iostream>
using namespace std;

int main(){
    int a[10]= {5,3,6,9,8,7,4,1};

    cout<<"'\n"<<a[4];
    cout<<"'\n"<<a[2];

    return 0;

} */



//This program is to demonstrate the  Arra elements uing user !!

/* #include<iostream>
using namespace std;
int main()
{

int a[4];

cout<<"Enter only 4 elements need to be inserted in the Array ::";
cin>>a[0];
cin>>a[1];
cin>>a[2];
cin>>a[3];
cout<<"\n"<<a[3];
cout<<"\n"<<a[1];


 return 0;

}
 */



//This program is to take the elements  to be inserted in array and display them using the for loop!

/* #include<iostream>
using namespace std;

int main()
{
    int a[5],i;

    cout<<" Enter the 5 elements to be inserted in side the Array::";

        for(i=0; i<5; i++)
    {
        cin>>a[i];
    }

    cout<<" The required result is ::";
    cout<<"\n"<<a[4];
    cout<<"\n"<<a[3];
    cout<<"\n"<<a[2];
    cout<<"\n"<<a[1];
    cout<<"\n"<<a[0];


    return 0;
    
} */


//This program is to take the elements  to be inserted in array and display them using the for loop! in Reverse order!
/* 
#include<iostream>
using namespace std;

int main()
{
    int a[0],i,n,j;

    cout<<" Enter the size of the Array::";
    cin>>n;
    cout<<"ENTER THE ELEMENTS TO BE INSERTED IN THE ARRAY::\n";
    for( i=1; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Element inserted";

    for( i=1; i<n; i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
    
} */


//Write a program to add up all the values present inside the array and display as the Sum of the Array!

/* #include<iostream>
using namespace std;
int main()
{
     int a[5], i,sum=0;
     cout<<"Enter the 5 elements to be inserted in side the Array ::";

     for( i=0; i<5; i++){
        cin>>a[i];
     }
     
     for( i=0; i<5; i++)
     {
       sum=sum+a[i];
     }

     cout<<"The sum off all the elements in the array are is ::"<<sum;

     return 0;
} */


//write a program to search the given element weather it is present in the array or not !

#include<iostream>
using namespace std;
 int main(){
    int a[5],i=0,n;
    cout<<"Enter any 5elements to be inserted inside the array::";
    for(i=0; i<5; i++)
    {

       cin>>a[i];

    }

    cout<<"Elements are inserted\n\n";

    cout<<"Enter the element to be searched::";

    cin>>n; 

    for(i=0; i<5; i++)
    {
        if (a[i]==n)
        { 
          cout<<"Element Found";
        }

    }

    return 0;                                                                             
}




