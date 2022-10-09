#include<stdio.h>
#include<stdlib.h>
void matrixaddition(void);
void matrixsub(void);

void matrixaddition()
{
	int mat[2][2],mat1[2][2],mat2[2][2],r,c;
	printf("Enter the element's for matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&mat[r][c]);
		}
	}
	printf("Enter the element's for matrix one:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&mat1[r][c]);
		}
	}
		printf("After addition:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
		mat2[r][c]=mat[r][c]+mat1[r][c];//	scanf("%d",&mat[r][c]);
		printf(" %d",mat2[r][c]);
		}
		printf("\n");
	}
}
void matrixsub()
{
	int mat[2][2],mat1[2][2],mat2[2][2],r,c;
	printf("Enter the element's for matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&mat[r][c]);
		}
	}
	printf("Enter the element's for matrix one:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&mat1[r][c]);
		}
	}
		printf("After subtraction:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
		mat2[r][c]=mat[r][c]-mat1[r][c];//	scanf("%d",&mat[r][c]);
		printf("%d",mat2[r][c]);
		}
		printf("\n");
	}
}
 void matrixtran()
{
    int mat[2][2],mat1[2][2],mat2[2][2],r,c;
	printf("Enter the element's for matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&mat[r][c]);
		}
	}
	printf("After transpose:\n");
		for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			mat1[c][r]=mat[r][c];
			printf(" %d",mat1[r][c]);
		}
		printf("\n");
	}
} 
void matrixmulti()
{ 
//#include<stdio.h>
//int main()
//{
	int mat[100][100],mat1[100][100],mat2[100][100],r,c,a,b,k;
	printf("Enter the no of row:\n");
	scanf("%d",&a);
	printf("enter the no of column:\n");
	scanf("%d",&b);
	printf("Enter the element's for matrix one:\n");
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			scanf("%d",&mat[r][c]);
		}
	}
	printf("Enter the element's for matrix two:\n");
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			scanf("%d",&mat1[r][c]);
		}
	}
		for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			mat2[r][c]=0;
			for(k=0;k<2;k++)
			{
			
		  mat2[r][c]+=mat[r][k]*mat1[k][c];
	//	mat2[r][c]=sum;
	}
	//	printf(" %d",mat2[r][c]);
		//	scanf("%d",&mat[r][c]);
		}
	//	printf("\n");
	}
	printf("After Multiplication:\n");
	for(r=0;r<a;r++)
	{
		for(c=0;c<b;c++)
		{
			printf(" %d",mat2[r][c]);
		}
		printf("\n");
	}

	
}
int main()
{
	while(1)
	{
	switch(menu())
	{
		case 1:
		{matrixaddition();
		       break;}
		case 2:matrixsub();break;
		case 3:matrixmulti();break;//matrixmult();break;
		case 4:matrixtran();break;
		case 5:exit(0);
		default:printf("Invali number:\n");
	}
}



	//matrixaddition();
	//matrixsub();
return 0;
}
int menu()
{
	int choice;
	printf("Enter You want to do:\n");
	printf(" 1.Matrix Addition:\n 2.Matrix Substraction:\n 3.Matrix Multiplication:\n 4.Matrix Transpose:\n 5.Exit:\n Enter a no: ");
	scanf("%d",&choice);
	return (choice);
	
	
}



