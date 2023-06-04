// X and Y be two given sequences
// Initialize a table LCS of dimension X.length * Y.length
// X.label = X
// Y.label = Y
// LCS[0][] = 0
// LCS[][0] = 0
// Start from LCS[1][1]
// Compare X[i] and Y[j]
//     If X[i] = Y[j]
//         LCS[i][j] = 1 + LCS[i-1, j-1]   
//         Point an arrow to LCS[i][j]
//     Else
//         LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1])
//         Point an arrow to max(LCS[i-1][j], LCS[i][j-1])


#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }

int lcs(char* X, char* Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
		return 1 + lcs(X, Y, m - 1, n - 1);
	else
		return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}

int main()
{
	char S1[] = "AGGTAB";
	char S2[] = "GXTXAYB";
	int m = strlen(S1);
	int n = strlen(S2);

	printf("Length of LCS is %d", lcs(S1, S2, m, n));

	return 0;
}
