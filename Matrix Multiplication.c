#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	printf("enter no.of rows:\n");
	scanf("%d",&r);
	printf("enter no.of columns:\n");
	scanf("%d",&c);
	printf("enter elements of 1st mtrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of 2nd matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("mul matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]=0;
			for(k=0;k<c;k++){
			
			mul[i][j]+=a[i][j]+b[i][j];
		}
		}
	}
	//for printing result
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
