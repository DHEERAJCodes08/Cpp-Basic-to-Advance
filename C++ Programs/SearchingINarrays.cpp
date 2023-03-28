//This Program is to take the Size of Array form the User and searching the Perticular ellement from the Array

// Linear Search !

/* #include<iostream>
using namespace std;


int LinearSearch(int A[] ,int n,int  Key){
        for(int i=0;i<n;i++){
        if(A[i]==Key){
            return i;
        } 
  
    }

    return -1;
    
    
}

int main() {
    int n;
    cout<<"Enter the Size of An Array:";
    cin>>n;
    int A[n];

    cout<<"Enter the  Elements in the Array::";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    int Key;
    cout<<"Enter the Key to be Searched::";
    cin>>Key;

    cout<<LinearSearch(A, n ,Key)<<endl;





} */






//Binary Search

 #include<iostream>
 using namespace std;


 int BinarySearch(int A[],int n, int Key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(A[mid]==Key){
            return mid;
        }

        else if(A[mid]<Key){
            s=mid+1;

        }
        else{
            e=mid-1;
            
        }

    }
    return -1;

 }

 int main(){
    int n;
    cout<<"Enter the Size of An Array:";
    cin>>n;
    int A[n];

    cout<<"Enter the  Elements in the Array::";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    int Key;
    cout<<"Enter the Key to be Searched::";
    cin>>Key;

    cout<<BinarySearch(A, n, Key)<<endl;
    return 0;
 }



-------------------------------------------------------








