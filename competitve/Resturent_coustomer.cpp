#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int main(){
    vector<pair<int,string>> tim;
    int num,x,y,count=0;
    cin>>num;
    vector<int> final(num*2);
    for(int i=0;i<num;i++){
        cin>>x>>y;
        tim.push_back(make_pair(x,"entry"));
        tim.push_back(make_pair(y,"exit"));
        
    }
    
    sort(tim.begin(),tim.end());
    int i=0;
    for(auto x:tim){
        if(x.second=="entry")count++;
        else count--;
        final[i]=count;
        i++;
    }
    cout<<*max_element(final.begin(),final.end());
    
  return 0;
}