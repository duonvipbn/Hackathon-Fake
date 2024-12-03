#include <stdio.h>

int main(){
	int n, rows, columns, tong, newElement;
	int arr[100][100];
	int arrDuongCheoChinh[100];
	do{
		printf("MENU\n");
		printf("1.Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("4.In ra cac phan tu nam tren duong cheo chinh\n");
		printf("5.In ra cac phan tu nam tren duong cheo phu\n");
		printf("6.Sap xep duong cheo chinh theo thu tu tang dan\n");
		printf("7.Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("8.Thoat\n");
		printf("Chon: ");
		scanf("%d", &n);
		
		switch(n){
			case 1:
				do{
					printf("nhap hang doc: ");
					scanf("%d", &rows);
				}while(rows<0||rows>100);
				
				do{
					printf("nhap hang ngang: ");
					scanf("%d", &columns);
				}while(columns<0||columns>100);
					
				for(int i = 0; i < rows; i++){
					for(int j = 0; j < columns; j++){
						printf("arr[%d][%d]=", i, j);
						scanf("%d", &arr[i][j]);
					}	
				}
								
				break;
			case 2:
				for(int i = 0; i < rows; i++){
					for(int j = 0; j < columns; j++){
						printf("%d ", arr[i][j]);
					}	
					printf("\n");
				}
				break;
				
			case 3:
				tong = 0;
				//bien trai + phai
				for(int i = 0; i < rows; i++){
					tong *= arr[i][0];//trai
					tong *= arr[i][columns-1];//phai
					printf("%d %d ", arr[i][0], arr[i][columns-1]);
				}
				//bien tren + duoi
				for(int i = 1; i < columns-1; i++){
					tong *= arr[0][i];//tren
					tong *= arr[rows-1][i];//duoi
					printf("%d %d ", arr[0][i], arr[rows-1][i]);
				}
				printf("\ntich: %d\n", tong);
				
				break;
			case 4:
				for(int i = 0; i < rows; i++){
					printf("%d\n", arr[i][i]);
				}
				break;
			case 5:
				for(int i = 0; i < rows; i++){
					printf("%d\n", arr[i][rows-1-i]);
				}
				break;
			case 6:
				for(int i = 0; i < rows; i++){
					arrDuongCheoChinh[i] = arr[i][i]; 
				}
				for(int i = 0; i < rows-1; i++){
					for(int j = 0; j < rows-1-i; j++){
						if(arrDuongCheoChinh[i]>arrDuongCheoChinh[i+1]){
							int temp = arrDuongCheoChinh[i];
							arrDuongCheoChinh[i] = arrDuongCheoChinh[i+1];
							arrDuongCheoChinh[i+1] = temp;
						}
					}
				}
				for(int i = 0; i < rows; i++){
					printf("%d ", arrDuongCheoChinh[i]);
				}
				printf("\n");
				break;
			case 7:
				printf("nhap so phan tu tim kiem: ");
				scanf("%d", &newElement);
				for(int i = 0; i < rows; i++){
					for(int j = 0; j < columns; j++){
						if(arr[i][j]==newElement){
							printf("arr[%d][%d]\n", i, j);
							break;
						}						
					}

				}
				break;			
			default:
				
				break;	
		}
		
	}while(n!=8);
	
	return 0;
}
