/*
1.search method is used to generate permutation 
2.next_permutation()
*/




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> V;
typedef vector<bool> B;

int n=3;
V subset;
B choosen(n+1);

void search(){
    
    if(subset.size()==n){
     for(auto x:subset){
         cout<<x;
     }
     cout<<endl;
    }
    
    
    else{
        for(int i=1;i<=n ;i++){
            
            if(choosen[i]==true) continue;
            choosen[i]=true;
            subset.push_back(i);
            search();
            choosen[i]=false;
            subset.pop_back();
            
        }
    
        
    }
    
    
}





int main(){

for(int i=1;i<=n;i++){
    subset.push_back(i);
}

do{
    for(auto x:subset)
    cout<<x;
    cout<<endl;
}

while(next_permutation(subset.begin(), subset.end()));

return 0;
}