// nhap mot so nguyen n kiem tra n co phai so nguyen to hay ko 

#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    printf("Nhap n = \n");
    scanf("%d", &n);
    if(n < 2){
        printf(" khong phai so nguyen to: %d\n", n);
        return 0;
    }
    int x = 0;
    for(int i=2; i <= sqrt(n); i++){
        if(n % i == 0){
			x++;    
        }
    }
    if(x == 0){
        printf("la so nguyen to: %d\n", n);
    }else{
        printf("khong phai so nguyen to: %d\n", n);
    }
}
