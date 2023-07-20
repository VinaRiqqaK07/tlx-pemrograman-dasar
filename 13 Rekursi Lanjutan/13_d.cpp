//mirip password di rekursif

#include <iostream>
using namespace std;

int N, K, a[10], cek[10], x=1;

void brankas(int kedalaman){
	if(kedalaman>=K){
		//tampilkan
		for(int i=0; i<K; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}else{
		for(int i=x; i<=N; i++){
			if(!cek[i]){//angka i belum dipakai
				cek[i]=true;
				a[kedalaman]=i;
				x=i+1;				//supaya di kedalaman selanjutnya dimulai setelah bilangan ini
				brankas(kedalaman+1);
				cek[i]=false;
			}
		}
	}
}

int main(){
	
	scanf("%d %d", &N, &K);
	brankas(0);
	
	return 0;
}
