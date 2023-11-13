#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen n tu 1 - 9: ");
	scanf("%d",&n);
	printf("Bang cuu chuong %d la: \n",n);
	for(int i=1;i<=10;i++){
		printf("\n %d x %d = %d\t",n,i,n*i);
	}
}
