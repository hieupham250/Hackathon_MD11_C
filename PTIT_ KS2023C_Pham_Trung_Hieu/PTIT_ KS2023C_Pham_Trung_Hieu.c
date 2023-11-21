#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
	int i,j,n,m;
	printf("nhap so hang: ");
	scanf("%d",&n);
	printf("nhap so cot ");
	scanf("%d",&m);
	int numbers[n][m];
	int oddNumbers;
	int max,min;
	int sumNumbers,count,k; 
	do{
		printf("************************MENU**************************\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran\n");
		printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4. In ra cac gia tri co phan tu lon nhat,nho nhat nam tren duong bien,duong cheo chinh,duong cheo phu\n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
		printf("6. Tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan\n");
		printf("8. Nhap gia tri 1 mang 1 chieu gom n phan tu va chi so cot muon chen vao mang, thu hien chen vao mang 2 chieu\n");
		printf("9. Thoat\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1: //nhap cac gia tri vao mang
				printf("Nhap gia tri cac phan tu mang:\n");
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2: //in cac gia tri trong mang theo ma tran
				printf("Gia tri cac phan tu trong mang theo ma tran:\n");
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						printf("%d  ",numbers[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 3: //so luong cac phan tu le chia het cho 5
				oddNumbers=0;
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						if(numbers[i][j]%2!=0 && numbers[i][j]%5==0){
							oddNumbers++;
						}
					}
				}
				printf("So luong cac phan tu le chia het cho 5 la: %d\n",oddNumbers);
				break;
			case 4:
				//max,min duong bien trai
				max=numbers[0][0];
				min=numbers[0][0];
				for(i=0;i<n;i++){
					if(max<numbers[i][0]){
						max=numbers[i][0];
					}
					if(min>numbers[i][0]){
						min=numbers[i][0];
					}
				}
				printf("MAX MIN duong bien trai lan luot la %d,%d\n",max,min);
				//max,min duong bien phai
				max=numbers[n-1][m-1];
				min=numbers[n][m];
				for(i=0;i<n;i++){
					if(max<numbers[i][m-1]){
						max=numbers[i][m-1];
					}
					if(min>numbers[i][m-1]){
						min=numbers[i][m-1];
					}
				}
				printf("MAX MIN duong bien phai lan luot la %d,%d\n",max,min);
				//max,min duong bien tren
				max=numbers[0][0];
				min=numbers[0][0];
				for(j=0;j<n;j++){
					if(max<numbers[0][j]){
						max=numbers[0][j];
					}
					if(min>numbers[0][j]){
						min=numbers[0][j];
					}
				}
				printf("MAX MIN duong bien tren lan luot la %d,%d\n",max,min);
				//max, min duong bien duoi
				max = numbers[n-1][m-1];
       			min = numbers[n-1][m-1];
       			for (j=0;j<n;j++){
        			if (max < numbers[n-1][j]){
						max = numbers[n-1][j];
					}
        			if (min > numbers[n-1][j]){
        				min = numbers[n-1][j];
					}
    			}
    			printf("MAX MIN duong bien duoi lan luot la %d,%d\n",max,min);
    			//max, min duong cheo chinh
    			if(n==m){
    				i=1;
    				j=1;
    				max=numbers[0][0];
    				min=numbers[0][0];
					while(i<n){
						if(max<numbers[i][j]){
							max=numbers[i][j];
						}
						if(min>numbers[i][j]){
							max=numbers[i][j];
						}
						i++;
						j++;
					}
					printf("MAX MIN duong cheo chinh lan luot la %d,%d\n",max,min);
					//max, min duong cheo phu
					i=1;
					j=n-2;
					max=numbers[0][n-1];
					min=numbers[0][n-1];
					while(j>=0){
						if(max<numbers[i][j]){
							max=numbers[i][j];
						}
						if(min>numbers[i][j]){
							min=numbers[i][j];
						}
						i++;
						j--;
					}
					printf("MAX MIN duong cheo phu lan luot la %d,%d\n",max,min);
				}
				break;
			case 5:
				break;
			case 6: //tong cac phan tu so nguyen to trong mang
				sumNumbers=0;
				for(i=0;i<n;i++){
					for(j=0;j<m;j++){
						count=0;
						for(k=2;k<numbers[i][j];k++){
							if(numbers[i][j]%k==0){
								count=1;
								break;
							}
						}
						if(count==0&&numbers[i][j]>=2){
							sumNumbers+=numbers[i][j];
						}
					}
				}
				printf("tong so nguyen to la: %d\n",sumNumbers);
				break;
			case 7:
				break;
			case 8:
				break; 
			case 9:
				exit(0);
			default:
				printf("Vui long nhap tu 1-9\n");
		}
	} while(1==1);
}
