#include <stdio.h>

int main() {
    int mang[2][3] = {{1,2,3},{4,7,11},};
    int max = mang[0][0];
    int i,j;
   for (i=0; i<2;i++){
   	    for(j=0; j<3;j++){
   	    	if (max < mang[i][j]){
   	    		max = mang[i][j];
			   }
		   }
   }
   printf("Phan tu lon nhat cua mang la: %d\n", max);
    return 0;
}

