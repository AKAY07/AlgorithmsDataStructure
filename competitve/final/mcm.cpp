#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int solve(vector<int>arr,int i,int j){
    if(i>=j)return 0;
    int mini=INT_MAX,k,temp;
    for(k=i;k<=j-1;k++)
       temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j],mini=min(mini,temp);
    return mini;
    
}

int main(){
int n;cin>>n;
vector<int>mat(n);
for(int i=0;i<n;i++)cin>>mat[i];
cout<<solve(mat,1,n-1);
return 0;    
}