#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;



int main() {
    vector<pair<int,int>> arr;
    int n,sum,temp,flag=0;
    cin>>n>>sum;
    for(int i=0;i<n;i++) cin>>temp,arr.push_back(make_pair(temp,i));
    
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<j && arr.size()!=1){
        if(arr[i].first+arr[j].first==sum) {
        cout<<arr[i].second+1<<" "<<arr[j].second+1;    
        flag=1;
        break;   
        }
        else if(arr[i].first+arr[j].first>sum) j--;
        else i++;
    }
    if(flag==0)cout<<endl<<"IMPOSSIBLE";
 return 0;
}