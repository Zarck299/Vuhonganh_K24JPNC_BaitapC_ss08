#include<stdio.h>
  int main (){
  	int mang[2][3] = {{1,4,7},{2,6,9}};
  	int sum,tongBienphai,tongBientrai;
	
	tongBientrai=mang[0][0]+mang[0][1]+mang[0][2];
	tongBienphai=mang[3][0]+mang[3][1]+mang[3][2];
	sum=tongBientrai + tongBienphai;
	
	printf("Tong cac phan tu tren duong bien cua ma tran la %d",sum);
	return 0;
}
