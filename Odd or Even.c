#include<stdio.h>
int main()
{
	int num[100],i;
	printf("enter elements from 0 t0 10:\n");
	for(i=0;i<10;i++)
	scanf("%d",&num[i]);
	printf("\neven numbers are:\n");
	for(i=0;i<10;i++){
		if(num[i]%2==0)
			printf("%d\t",num[i]);
	}
	printf("\nodd numbers are:\n");
	for(i=0;i<10;i++){
		if(num[i]%2!=0)
		printf("%d\t",num[i]);
	}
	return 0;

}
