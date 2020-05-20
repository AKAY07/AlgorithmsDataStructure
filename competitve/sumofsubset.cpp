#include<iostream>
#include<vector>
using namespace std;

int count=0;
int n=3;
int arr[10];
vector<int> subset;
vector<int>::iterator i;
int sum=0;
void search(int k){
    
    if(k==n+1){
    int temp=0; 
    for(i=subset.begin();i!=subset.end();i++){
     temp=temp+ arr[(*i)];
    }
    //cout<<temp<<endl;
    sum=(temp>sum)?temp:sum;
    }
    else{
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
    
    
}




int main(){
    cout<<"enter the numbers";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    search(1);
    cout<<sum;
    
    return 0;

}
