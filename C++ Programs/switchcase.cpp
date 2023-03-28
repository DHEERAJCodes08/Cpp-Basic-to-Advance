/* #include<iostream>
using namespace std;
 int main()
  {
    switch (2)
    {
    case 1: cout<<"I Am Dheeraj";
        break;

    case 2: cout<<"i am Suraj ";
      break;

    case 3: cout<<" I am Samar";
      break;

    default: cout<<"Select the number between 1-3 ::";
        break;
    }
    return 0;
  }

 */






  /*  This program is to take the opinion from the user and make it perfiorm operation on that case! */

/*   #include<iostream>
  using namespace std;

  int main()
  {
    int sum;
     cout<<"\n1) My name is Dheeraj\n2) My name is Suraj\n3) My name is Samar\n  Enter the choice Number::";
     cin>>sum;

     switch(sum)
     {
     case 1: cout<<" My name is Dheeraj my age is 19 and iam doing btech in Computer Science";
        break;

     case 2: cout<<" My name is Suraj my age is 15 and iam in 8th Class";
        break;

     case 3: cout<<" My name is Suraj my age is 15 and iam in 8th Class";
        break;
     
     default: cout<<"Enter the Correct Choise";
        break;
    }

     return 0;

  } */








  /*  this program is to take the opinion from the user and  and use ( Goto function ) */
    

    /*  what i sgoto function??? */

    /* Goto function basicially starts working when the user gives wrong value in switch case  
    
    Goto function uses an variable name example  ( X ) So Whe the user puts Wrong Choice the Goto function gets Activated  whose VAR ( X ) is present on top !! */





    /*  in this example the goto function is used in bottom after default, and its variable  ( X )is used on top */

      #include<iostream>
  using namespace std;

  int main()
  {
    int sum;
     x:    //this is the variable of goto function
     cout<<"\n1) My name is Dheeraj\n2) My name is Suraj\n3) My name is Samar \nEnter the choice Number::";
     cin>>sum;

     switch(sum)
     {
     case 1: cout<<" My name is Dheeraj my age is 19 and iam doing btech in Computer Science";
        break;

     case 2: cout<<" My name is Suraj my age is 15 and iam in 8th Class";
        break;

     case 3: cout<<" My name is Suraj my age is 15 and iam in 8th Class";
        break;
     
     default: cout<<"Enter the Correct Choise";
     goto x;    //this is the goto function
    }

     return 0;

  }







