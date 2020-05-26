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
for(int x=1;x<=sum;x++){
    for(auto c:coins){
        if(x-c>=0) d[x]=(d[x]+d[x-c])%1000000007;
    }
}

if(d[sum]!=INT_MAX)
cout<<d[sum];    
else cout<<"-1";
return 0;    
}