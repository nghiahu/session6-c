#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j;
	printf("Nhap vao hai so nguyen: ");
	scanf("%d%d",&i,&j);
	do{		
		printf("*****CACULATOR***** \n");
		printf("1. tong 2 so \n");
		printf("2. hieu 2 so \n");
		printf("3. tich 2 so \n");
		printf("4. thuong 2 so \n");
		printf("5. so du phep chia 2 so \n");
		printf("6. uoc chung lon nhat \n");
		printf("7. boi chung nho nhat \n");
		printf("8. thoat \n");
		int choice ; scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("%d + %d = %d \n",i,j,i+j);
				break;
			case 2:
				printf("%d - %d = %d \n",i,j,i-j);
				break;
			case 3:
				printf("%d x %d = %d \n",i,j,i*j);
				break;
			case 4:
				printf("%d / %d = %d \n",i,j,i/j);
				break;
			case 5:
				printf("%d % %d = %d \n",i,j,i%j);
				break;	
			case 6:
				int UCLN;
				for(int n = 1 ; n <= i || n <= j ;n++){
					if(i % n == 0 && j % n == 0){
						UCLN = n;
					}
				}
				printf("UCLN la %d \n",UCLN);
				break;
			case 7:
				printf("BCNN la %d \n", (i*j)/UCLN);
				break;
			case 8:
				exit(0);
			default:
				printf("vui long chon lai tu 1 - 8 \n");
		}
	}while(1 == 1);
}
