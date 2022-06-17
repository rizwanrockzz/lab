#include <iostream>
#include <vector>
using namespace std;

void printSpiralOrder(vector<vector<int>> const &mat)
{
	// base case
	if (mat.size() == 0) {
		return;
	}

	int top = 0, bottom = mat.size() - 1;
	int left = 0, right = mat[0].size() - 1;

	while (1)
	{
		if (left > right) {
			break;
		}
		// print top row
		for (int i = left; i <= right; i++) {
			cout << mat[top][i] << " ";
		}
		top++;

		if (top > bottom) {
			break;
		}
		// print right column
		for (int i = top; i <= bottom; i++) {
			cout << mat[i][right] << " ";
		}
		right--;

		if (left > right) {
			break;
		}
		// print bottom row
		for (int i = right; i >= left; i--) {
			cout << mat[bottom][i] << " ";
		}
		bottom--;

		if (top > bottom) {
			break;
		}
		// print left column
		for (int i = bottom; i >= top; i--) {
			cout << mat[i][left] << " ";
		}
		left++;
	}
}

int main()
{
// 	vector<vector<int>> mat =
// 	{
// 		{1,2,3,4},
// 		{5,6,7,8},
// 		{9,10,11,12}
// 	};
	
	vector<vector<int>> mat =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	printSpiralOrder(mat);

	return 0;
}


// OUTPUT

// 1 2 3 4 8 12 11 10 9 5 6 7

// 1 2 3 6 9 8 7 4 5 
  
 
