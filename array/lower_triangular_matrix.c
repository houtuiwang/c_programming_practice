#include <stdio.h>

int main(void)
{
	int arr1[10][10],i,j,n;

	printf("Input the size of the square matrix:");
	scanf("%d", &n);
	printf("Input elements in the first matrix:\n");
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			printf("element - [%d][%d]:", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("the matrix is :\n");
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			printf("% 4d", arr1[i][j]);
		}
		printf("\n");
	}
	printf("Setting zero in low triangular matrix:\n");
	for (i = 0; i < n; ++i) {
		printf("\n");
		for (j = 0; j < n; ++j) {
			if (i<=j) {
				printf("% 4d",arr1[i][j]);
			} else {
				printf("% 4d", 0);
			}
		}
	}
	printf("\n\n");
	return 0;
}