#include <iostream>
#define M 4
#define N 4

void print(int mat[M][N])
{
	// Traverse through all rows
	for (int i = 0; i < M; ++i) {

		// If current row is even, print from
		// left to right
		if (i % 2 == 0) 
		{
			for (int j = 0; j < N; ++j)
				std::cout << mat[i][j] << " ";

			// If current row is odd, print from
			// right to left
		}
		else
		{
			for (int j = N - 1; j >= 0; --j)
				std::cout << mat[i][j] << " ";
		}
	}
}

// Driver code
int main()
{
	int mat[M][N] = {
		            { 10, 20, 30, 40 },
					{ 15, 25, 35, 45 },
					{ 27, 29, 37, 48 },
					{ 32, 33, 39, 50 } };
	print(mat);
}
