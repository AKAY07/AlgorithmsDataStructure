#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
long long sum,n;
cin>>n;
cin >>sum;
vector<long long> d(sum+1),coins(n);

for(int i=0;i<n;i++)cin>>coins[i];

d[0]=1;
for(auto c:coins){
for(int x=1;x<=sum;x++){
    
        if(c<=x) d[x]=(d[x]+d[x-c])%1000000007;
    }
}
cout<<d[sum];    
return 0;    
}