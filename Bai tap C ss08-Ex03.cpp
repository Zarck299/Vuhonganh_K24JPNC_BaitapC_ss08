#include <stdio.h>

int main() {
    int n;

    printf("Hay nhap kich thuoc cua ma tran (so nguyen duong): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0. Chuong trinh ket thuc.\n");
        return 1;
    }

    int matrix[n][n];

    printf("Hay nhap cac phan tu cua ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu o vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMa tran da nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
