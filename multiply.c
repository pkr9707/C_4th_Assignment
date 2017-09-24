
#include <stdio.h>


int main()
{

	int a[100][100], b[100][100], result[100][100], r1, c1, r2, c2, i, j, k;
	int x, y, z, sum[100][100];

	printf("Enter rows and column for first matirx: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for second matrix");
	scanf("%d %d", &r2, &c2);
	while (c1 != r2) {
		printf("Error! column of first matrix not equal to row of second.\n\n");
		printf("Enter rows and column for first matirx:  ");
		scanf("%d %d", &r1, &c1);
		printf("Enter rows and column for second matrix:  ");
		scanf("%d %d", &r2, &c2);
	}
	printf("\nEnter the elements of matrix 1:\n");
	
	for (i = 1; i <= r1; i++) {
		for (j = 1; j <= c1; j++) {
		
			printf("Enter the elements fo a%d%d:   ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the elements of matrix 2:\n");
	for (j = 1; j <= r2; j++) {
		for (k = 1; k <= c2; k++) {
		
			printf("Enter the elements fo a%d%d:    ", j, k);
			scanf("%d", &b[j][k]);
		}
	}

	//result[i][k] = a[i][j] * b[j][k];






	for (i = 1; i <= r1; i++) {
			for (k = 1; k <= c2; k++) {
				result[i][k] = 0;
				for (j = 1; j <= r2; j++) {
					result[i][k] = result[i][k] + a[i][j] * b[j][k];
				
				}
			}
			
		}
			 
	printf("\n\n");
	for (i = 1; i <= r1; i++) {
		for (k = 1; k <= c2; k++) {
		
			printf("%d ", result[i][k]);
		
		}
	
		printf("\n\n");
	
	}
	getchar();
	getchar();
    return 0;
}
