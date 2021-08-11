#include <iostream>
using namespace std;

int main()
{
   int a;
   cout<<"Enter the age of the 1st candidate"<<endl;
   cin>>a;
   int b;
   cout<<"Enter the age of 2nd candidate"<<endl;
   cin>>b;
   if(a>=18 && b>=18){
       cout<<"Both are eligible to vote"<<endl;
   }
   else if(a>=18 && b<18){
       cout<<"Only a is allowed to vote"<<endl;
   }
   else if(a<18 && b>=18){
       cout<<"Only b is allowed to vote"<<endl;
   }
   else{
       cout<<"Both are not eligible to vote"<<endl;
   }
   
   

    return 0;
}
