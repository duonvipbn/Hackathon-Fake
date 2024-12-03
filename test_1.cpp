#include <stdio.h>

int main(){
	int n, sizeArr, maxArr, soNguyenTo, addIndex, newElement;
	int arr[100];
	do{
		printf("1.Nhap so phan tu can nhap và gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan ly\n");
		printf("3.In ra gia tri lon nhat cua mang\n");
		printf("4.In ra cac phan tu la so nguyen to trong mang\n");
		printf("5.Them mot phan tu vao trong mang\n");
		printf("6.Xoa mot phan tu trong mang\n");
		printf("7.Sap xep mang theo thu tu tang dan\n");
		printf("8.Tim kiem phan tu(nguoi dung nhap) và in ra vi tri index cua phan tu do\n");
		printf("9.Thoat\n");
		printf("Chon: ");
		scanf("%d", &n);
		switch(n){
			case 1:
				do{
					printf("nhap so phan tu can nhap [0; 100]: ");
					scanf("%d", &sizeArr);
				}while(sizeArr < 0 || sizeArr > 100);
				
				for(int i = 0; i < sizeArr; i++){
					printf("arr[%d]=", i);
					scanf("%d", &arr[i]);
				}
			
				break;	
			case 2:
				for(int i = 0; i < sizeArr; i++){
					printf("arr[%d]=%d\n", i, arr[i]);
				}
				break;
			case 3:
				maxArr = arr[0];
				for(int i = 0; i < sizeArr; i++){
					if(maxArr < arr[i]){
						maxArr = arr[i];
					}
				}
				printf("gia tri lon nhat cua mang la %d\n", maxArr);
				break;
			case 4:
				for(int i = 0; i < sizeArr; i++){
					if(arr[i]<=1){
						continue;
					}
					soNguyenTo = 1;
					for(int j = 2; j < arr[i]; j++){
						if(arr[i]%j==0){
							soNguyenTo = 0; 
						}
					}
					if(soNguyenTo){
						printf("arr[%d]=%d\n", i, arr[i]);	
					}	
				}	
				break;	
			case 5:
				do{
					printf("nhap vi tri phan tu muon them [0; 100]: ");
					scanf("%d", &addIndex);
				}while(addIndex < 0 || addIndex > 100);
				
				printf("nhap so phan tu: ");
				scanf("%d", &newElement);
				
				if(addIndex >= sizeArr){
					sizeArr = addIndex + 1;
					arr[addIndex] = newElement;
				}else{
					
					
					for(int i = sizeArr - 1; i >= addIndex; i--){
						arr[i+1] = arr[i];
					}
					arr[addIndex] = newElement;
					sizeArr += 1;
				}
				break;
				
			case 6:
				do{
					printf("nhap vi tri phan tu muon xoa [0; 100]: ");
					scanf("%d", &addIndex);
				}while(addIndex < 0 || addIndex > 100);
				
				if(addIndex >= sizeArr){
				}else{
					
					for(int i = addIndex; i < sizeArr; i++){
						arr[i] = arr[i+1];
					}
					sizeArr--;
				}
				
				break;
				
			case 7:
				//bubble sort
				
				for(int i = 0; i < sizeArr-1; i++){
					for(int j = 0; j < sizeArr-i-1; j++){
						if(arr[j] > arr[j+1]){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}
					}
				}
			
				break;
			case 8:
				printf("nhap so phan tu tim kiem: ");
				scanf("%d", &newElement);
				for(int i = 0; i < sizeArr; i++){
					if(arr[i]==newElement){
						printf("arr[%d]\n", i+);
						break;
					}
				}
			
				break;							
			default:
			
				break;	
			
		}
	}while(n!=9);	
	return 0;
}
