#include<stdio.h>
  int main(){
  	int n,i;
  printf ("Hay nhap so phan tu cua mang: \n");
  scanf("%d",&n);
  int arr[n];
  printf("Hay nhap cac phan tu cua mang: ");
  for (i=0; i<n; i++){
  	printf("\nPhan tu thu %d", i+1);
  	scanf("%d", &arr[i]);
  }
  printf("Cac phan tu trong mang duoc sap xep theo thu tu nguoc lai la: \n");
  for(i= n-1; i>=0; i--){
  	  printf("%d", arr[i]);
  }
  return 0;
}
