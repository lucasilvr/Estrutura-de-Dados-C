#include <stdio.h>

int main(){
	
	int A[3][3];
	int i, j;
	
	for(i = 0; i<3; i++){
		for (j = 0; j<3; j++){
				printf("A[%d][%d]: \n", i, j);
				scanf("A[%d][%d]", A[i][j]);
		}
	
	}
	
	return 0;
}
