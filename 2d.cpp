
#include <stdio.h>
int main() {
	int T[5][6]={{5,5,5,5,5,5},
				 {0,0,0,0,0,0},
				 {5,5,5,5,5,5},
				 {0,0,0,0,0,0},
				 {5,5,5,5,5,5},
				};
	
	int i,j,a,o;
	scanf("%d",&a);
	for(o=0;o<a;o++){
		printf("\n");
		for(i=0;i<5;i++) {
			for(j=0;j<6;j++) {
				printf("%d ",T[j][i]);
			}
			printf("\n");
		}
	}
}

