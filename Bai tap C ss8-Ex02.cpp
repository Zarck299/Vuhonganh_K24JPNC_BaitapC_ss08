#include<stdio.h>
  int main(){
  	int n, i, testNumber, found=0;
  printf("Hay nhap so phan tu cua mang: \n");
  scanf("%d",&n);
  int arr[n];
   printf("Hay nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
     printf("Hay nhap phan tu can kiem tra: ");
    scanf("%d", &testNumber);
    for (i = 0; i < n; i++) {
        if (arr[i] == testNumber) {
            found = 1;
            printf("Phan tu %d ton tai trong mang o vi tri: %d\n", testNumber, i + 1);
            break;
        }
    }
     if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", testNumber);
    }

    return 0;
}
