
#include <bits/stdc++.h> 
using namespace std; 
#include<limits.h>
#define I 99999 


int main()  
{  
    int V=4;    
    int graph[V][V] = { {0, 3, I, 7},  
                        {8, 0, 2, I},  
                        {5, I, 0, 1},  
                        {2, I, I, 0}  
                    };  
  
    
    int sol[V][V], i, j, k;  
  
    for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            sol[i][j] = graph[i][j];  

    for (k = 0; k < V; k++)  
    {  
    
        for (i = 0; i < V; i++)  
        {  
           
            for (j = 0; j < V; j++)  
            {  
                
                if (sol[i][k] + sol[k][j] < sol[i][j])  
                    sol[i][j] = sol[i][k] + sol[k][j];  

            }

            
        }  
    }  
  
    cout<<"final distance is "<<endl;

    for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (sol[i][j] == I)  
                cout<<"I"<<"     ";  
            else
                cout<<sol[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  

    return 0;  
}  
  