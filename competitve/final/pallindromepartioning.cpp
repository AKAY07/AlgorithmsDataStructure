#include <iostream>
#include <climits>
using namespace std;


#define MAX 30
int lookup[MAX][MAX];

bool isPalindrome(string X, int i, int j)
{
	while (i <= j)
	{
		if (X[i++] != X[j--])
			return false;
	}
	return true;
}

int minPalinPartition(string X, int i, int j)
{
	if (i == j || isPalindrome(X, i, j))
		return 0;

	int min = INT_MAX;
	if (lookup[i][j] == 0)
	{
	for (int k = i; k <= j - 1; k++)
	{
		int count = 1 + minPalinPartition(X, i, k) +
					minPalinPartition(X, k + 1, j);

		if (count < min)
			min = count;
	}
	lookup[i][j]=min;
}
	return lookup[i][j];
}

int main()
{
	string X = "BABABCBADCD";	
	int n = X.length();

	cout << "The minimum cuts required are "
		 << minPalinPartition(X, 0, n - 1);

	return 0;
}