#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
vector<int>subset;
vector<int>sum;
void search(int k,vector<int> arr){
    if(k==n+1){
        int temp=0;
        for(auto x:subset)temp+=arr[x];
        auto it=find(sum.begin(),sum.end(),temp);
        if(it==sum.end())sum.push_back(temp);
        
    }
    else{
        subset.push_back(k);
        search(k+1,arr);
        subset.pop_back();
        search(k+1,arr);
    }
}

int main(){
cin>>n;
vector<int>arr(n+1);
for(int i=1;i<n+1;i++)cin>>arr[i];
search(1,arr);
sort(sum.begin(),sum.end());
cout<<sum.size()-1<<endl;
for(auto x:sum){
    if(x!=0)cout<<x<<" ";
}
return 0;
}