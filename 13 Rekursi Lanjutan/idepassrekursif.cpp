//permutasi angka berulang

#include <iostream>
using namespace std;

int N, catat[1001];

void tulis(int kedalaman){
	if(kedalaman>=N){
		for(int i=0; i<N; i++){
			printf("%d", catat[i]);
		}
		printf("\n");
	}else{
		//masuk ke lapisan lebih dalam
		for(int i=1; i<=N; i++){
			catat[kedalaman]=i;
			tulis(kedalaman+1);
		}
	}
}

int main(){
	
	scanf("%d", &N);
	tulis(0);
	
	return 0;
}
