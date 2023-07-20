#include <iostream>
using namespace std;

int a[25][25], M, N, B, K, bola;
int bintang=1;

void klik(int x, int y){
	a[x][y]=0;
	
	if(bola==a[x-1][y]&& x-1>=0){
		bintang++;
		klik(x-1, y);
	}
	
	if(bola==a[x][y-1]&& y-1>=0){
		bintang++;
		klik(x, y-1);
	}
	
	if(bola==a[x+1][y]&& x+1<M){
		bintang++;
		klik(x+1, y);
	}
	
	if(bola==a[x][y+1]&& y+1<N){
		bintang++;
		klik(x, y+1);
	}
}

int main(){
	scanf("%d %d", &M, &N);
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &B, &K);
	bola = a[B][K];
	klik(B, K);
	
	printf("%d", bintang*(bintang-1));
	return 0;
}

/* jadi pas pengecekan kliknya, harus ada pembatasan indeksnya
walaupun menurutku nda perlu ji karena pada akhirnya, pasti nilai indeksnya nol toh di situ
dan nda akan memenuhi if. tapi kurang tahu juga sih. mungkin terisi nilai sembarang?
kalau begitu, belum tentu jugaa sama nilainya sama bola. tapi mungkin lebih bagus jaga-jaga
untuk tidak WA*/
