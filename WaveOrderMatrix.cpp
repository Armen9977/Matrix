#include <iostream>
#define M 4
#define N 4

void print(int mat[M][N])
{
	// Traverse through all rows
	for (int j = 0; j < N; ++j) 
	{

		// If current row is even, print from
		// up to down
		if (j % 2 == 0) {
			for (int i = 0; i < M; ++i)
				std::cout << mat[i][j] << " ";

			// If current row is odd, print from
			// down to up
		}
		else {
			for (int i = N - 1; i >= 0; --i)
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
