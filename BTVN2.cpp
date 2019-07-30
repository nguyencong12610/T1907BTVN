#include<stdio.h>
int main(){
	int n, x=0 ,i;
	printf("Nhap so hoan hao: \n");
	scanf("%d",&n);
	for(i = 1; i < n; i++){
		if(n % i == 0){
			x = x + i;
		}
	}
	if(x == n){
		printf("Day la so hoan hao %d \n", n);
	}else{
		printf("Day khong phai so hoan hao: %d\n",n);
	}
	
	return 0;
}
