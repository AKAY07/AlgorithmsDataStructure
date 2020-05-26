#include<iostream>
#include<vector>
using namespace std;

int main(){
long long sum; 
cin >>sum;
vector<long long> d(sum+1);

d[0]=1;
for(int x=1;x<=sum;x++){
    for(int c=1;c<=6;c++){
     if(x-c>=0)
     d[x]=(d[x]+d[x-c])%1000000007;    
    }   
}


cout<<d[sum];    
return 0;    
}