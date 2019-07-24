#include <stdio.h>

int main(){
	int a,b;
	
	printf("Nhap so thu nhat:\n" );
	scanf("%d" ,&a);
	printf("Nhap so thu hai: \n" );
	scanf("%d" ,&b);
	
	if(a>b)
	
	{
		printf("%d / %d = %d\n",a,b,a/b);
	}
	else
	{
		printf("%d * %d = %d\n",a,b,a*b);
	}
	
	return 0;
}
