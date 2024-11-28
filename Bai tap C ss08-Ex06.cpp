#include <stdio.h>
int main(){
	int mang[4][4]={
	{1,6,9,11},
	{3,10,6,7},
	{4,11,142,58},
	{5,9,32,44},
	};
	int tong,n=4;
	for(int i=0;i<=n-1;i++){
		printf("Gia tri %d la %d\n",i,mang[i][i]);
		tong+=mang[i][i];
	}
	printf("Tong cac gia tri tren duong cheo la : %d",tong);			
	return 0;	
		
}
