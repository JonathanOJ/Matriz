#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int N;
	scanf("%d", &N);
	
	int Matriz[N][N];
	
	int i=0,j=0;
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			Matriz[i][j] = 10+(rand()%100);	
		}
	}
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
		printf("%d\t", Matriz[i][j]);	
		}
	printf("\n");
	}	
	
	int diagPrin=0, diagSec=0;
	
	for(i=0; i<N; i++){
		diagPrin = diagPrin + Matriz[i][i];
	}	
	for(i=0; i<N; i++){
		diagSec = diagSec + Matriz[i][N - 1 -i];
	}
	
	printf("Soma Diagonal Principal: %d\n", diagPrin);
	printf("Soma Diagonal Secundaria: %d\n", diagSec);
}
