#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;




int main(){
int n,count=1,prev=0;
cin>>n;
vector<int> arr(n);

for(int i=0;i<n;i++)cin>>arr[i];
sort(arr.begin(),arr.end());

for(int i=0;i<n-1;i++){
    if(arr[i]!=arr[i+1]){
        count++;
    }
    else continue;
}
cout<<endl<<count;
return 0;
}