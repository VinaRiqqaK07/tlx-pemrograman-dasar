//cakaran untuk materi yang permutasi(?)

#include <iostream>
using namespace std;

int N, catat[1000];
bool pernah[1000];

void tulis(int kedalaman){
	if(kedalaman >= N){
		//cetak password
		for(int i=0; i<N; i++){
			printf("%d", catat[i]);
		}
		printf("\n");
	}else{
		//masuk ke lapisan lebih dalam
		for(int i=1; i<=N; i++){
			if(!pernah[i]){			//i belum pernah? || ih kenapa? bukannya berarti pernah[i]=false?..iya
				pernah[i]=true;		//gunakan
				catat[kedalaman]=i;	//catat di sini
				tulis(kedalaman+1);
				pernah[i]=false;	//selesai digunakan
			}
		}
	}
}

int main(){
	
	scanf("%d", &N);
	tulis(0);
	
	return 0;
}

/*pahammi, catatan
indeks i : menentukan billangan
pernah[i], menentukan apakah bilangan i sdh 
dipake atau belum. Contoh pernah[1] berarti cek 1 sdh
atau blum u/ mencegah digit berulang
tiap kedalaman mengatur bilangan dengan indeks bersesuaian.
Contoh kedalaman = 0, mengatur bilangan pertama
yang indeksnya 0. a[0], atau di program
catat[0]=i*/
