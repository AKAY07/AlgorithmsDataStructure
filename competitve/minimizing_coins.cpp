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

d[0]=0;
for(int x=1;x<=sum;x++){
    d[x]=INT_MAX;
    for(auto c:coins){
        if(x-c>=0) d[x]=min(d[x],d[x-c]+1);
    }
}

if(d[sum]!=INT_MAX)
cout<<d[sum];    
else cout<<"-1";
return 0;    
}