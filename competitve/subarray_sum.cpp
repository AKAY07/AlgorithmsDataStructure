#include<iostream> 
#include<climits> 
#include<vector>
using namespace std; 
typedef long long int ll;
  
int maxSubArraySum(vector<ll> a, ll size) 
{ 
    ll max_so_far =  -2000000000, max_ending_here = 0; 
  
    for (ll i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  

int main() 
{ 
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    cout<<endl<<maxSubArraySum(a,n);
    return 0; 
}   