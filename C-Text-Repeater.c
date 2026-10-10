#include <stdio.h>
int main()
{
	int j;
	char k[100];
	printf("What You Want To Write\n");
	scanf("%99[^\n]{" ,k);
	printf("How Many Times You Want To Write\n");
	scanf("%d" ,&j);
	for(int i = 1 ;i<=j;i++)
	{
		printf("%s\n" ,k);
	}
}
