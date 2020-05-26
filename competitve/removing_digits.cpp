#include <iostream>
#include<climits>
using namespace std;
int main()
{
 int digit,count=0,max1=0,no;
 
 cin>>digit;
 
 while(digit){
     no=digit,max1=0;
     while(no){
         max1=max(max1,no%10);
         no/=10;
     }
     digit-=max1;
     count++;
 }
 cout<<count;
 return 0;  
}
