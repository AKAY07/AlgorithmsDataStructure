#include<iostream>
#include<vector>
using namespace std;

int count=0;
int n=3;
vector<int> subset;
vector<int>::iterator i;
void search(int k){
    
    if(k==n+1){
    cout<<count<<"=";
    count++;    
    for(i=subset.begin();i!=subset.end();i++){
        cout<<*i<<"\t";
    }
    cout<<endl;
    }
    else{
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        search(k+1);
    }
    
    
}




int main(){
    search(1);
    return 0;

}
