#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int m=n;
	int tg=0;
	while(m){
		tg = tg*10+m%10;
		m/=10;
	}
	if(tg == n){
		printf("La so thuan nghich %d", n);
	}else{
		printf("Khong La so thuan nghich %d", n);
	}
	
	return 0;
	
}
