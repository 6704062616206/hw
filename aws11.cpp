#include <stdio.h>
int main(void)
{
	int r, a[22], A, b, new[22], n = 0;
	if(scanf("%d",&r)==1 && r>=1 && r<=20){
		for(int i=0;i<r;i++){
			if(scanf("%d",&A)==1 && A>=0 && A<=100){
				a[i]=A;
			}
			else{
				return 1;
			}
		}
		for(int i=0;i<4;i++){ //A
			printf("%d ",a[i]);
		}
		printf("\n");
		for(int i=0;i<r;i++){ //B
			if(a[i]>a[2]){
				printf("%d ",a[i]);
			}
		}
		printf("\n");
		for(int i=0;i<r;i++){ //C
			if(a[i]>a[2]){
				printf("%d ",i);
			}
		}
		printf("\n");
		a[r]=a[2]+a[3];
		for(int i=0;i<(r+1);i++){ //D
			printf("%d ",a[i]);
		}
		printf("\n");
		a[3]=a[2]+a[4];
		for(int i=0;i<(r+1);i++){ //E
			printf("%d ",a[i]);
		}
		printf("\n");
		if(a[1]>a[5]){ //F
			printf("2");
		}
		if(a[5]>a[2]){
			printf("6");
		}
		printf("\n");
		b=a[1]; //G
		a[1]=a[r];
		a[r]=b;
		for(int i=0;i<(r+1);i++){
			printf("%d ",a[i]);
		}
		printf("\n");
        for (int i = 0; i < r + 1; i++) {
            if (a[i] % 2 == 0) {
                new[n] = a[i];
                n++;
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", new[i]);
        }
	}
	else{
		return 1;
	}
}
