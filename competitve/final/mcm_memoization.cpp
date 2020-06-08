#include <iostream>
#include <climits>
using namespace std;

#define MAX 10
int lookup[MAX][MAX];
int MatrixChainMultiplication(int dims[], int i, int j)
{
	if (i>=j) return 0;
	int min = INT_MAX;
	if (lookup[i][j] == 0)
	{
	  for (int k = i;k<= j-1; k++)
		{
		    int cost = MatrixChainMultiplication(dims, i, k);
			cost += MatrixChainMultiplication(dims, k+1, j);
			cost +=	dims[i-1] * dims[k] * dims[j];
			if (cost < min)
				min = cost;
		}
		lookup[i][j] = min;
	}
	return lookup[i][j];
}

int main()
{
    int dims[] = { 10, 30, 5, 60 };
	int n = sizeof(dims) / sizeof(dims[0]);
	cout << "Minimum cost is " << MatrixChainMultiplication(dims,1,n-1);
	return 0;
}