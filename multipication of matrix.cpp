#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,i,j;
	printf("enter the no.of rows and columns of matrix A\n:");
	scanf("%d%d",&r1,&c1);
	printf("enter the no. of rows and columns of matrix B\n:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("the multification of matrix is not possible");
		return 0;
	}
	int A[r1][c1],B[r2][c2],C[r1][c2];
	printf("enter th elements of matrix A\n:");
	for(int i=0;i<r1;i++)
	for(int j=0;j<c1;j++)
	scanf("%d",&A[i][j]);
	printf("enter the elements of matrix B\n: ");
	for(int i=0;i<r2;i++)
	for( int j=0;j<c2;j++)
	scanf("%d",&B[i][j]);
	printf("enter the elements of matrix C\n:");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
		 C[i][j]=0;
		 for(int k=0;k<c1;k++)
		 C[i][j]+=A[i][k]*B[k][j];
		}
	}
	printf("product of matrix:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		printf("%d",C[i][j]);
		printf("\n");
	}
	return 0;
	

	
}
