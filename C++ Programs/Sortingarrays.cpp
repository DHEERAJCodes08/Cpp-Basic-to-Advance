//This Programs are generally Based on Sorting of the Arrays !

// Selection Sort ->
/* 
#include<iostream>
using namespace std;

int main(){
    int n;===============================================
    cout<<"Enter the Size of Array";
    cin>>n;
    int A[n];
    cout<<"Enter the elements in the Array ::";
    for(int i=0;i<n;i++){
        cin>>A[i];

    }


    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                int temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<A[i]<<"";
        cout<<endl;

    }



} */





//Bubble Sort !

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Size of the Array:: ";
    cin>>n;
    int A[n];
    cout<<"Enter the Elements in the Array :: ";
    for(int i=0;i<n;i++){
        cin>>A[i];

    }

    int Counter=1;
    while (Counter<n)
    {
    
    for(int i=0;i<n-Counter;i++){
        if(A[i]>A[i+1]){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp; 

                                          
                                                               
        }
    }
    Counter++;
}

for(int i=0;i<n;i++){
    cout<<A[i]<<endl;
}

return 0;
}