#include<stdio.h>
int main()
{
	int c,r,sum[c][r],i,j;
	printf("enter the no. of rows and columns of matrix A:\n");
	scanf("%d%d",&c,&r);
    int A[c][r],B[c][r],C[c][r];
    printf("enter the elements of matrix A:\n");
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++){
    		scanf("%d",&A[r][c]);
		}
	}
	printf("enter the elemrnts of matrix B:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
    for(i=0;i<r;i++){
    	for(j=0;j,c;j++){
    		sum[i][j]=A[i][j]+B[i][j];
		}
	}
    
	printf("Sum of matrices is %d\n:");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			scanf("%d",sum[r][c]);
		}
	}
	printf("\n:");
}
