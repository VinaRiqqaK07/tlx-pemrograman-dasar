//mirip cakaran permutasi

#include <iostream>
using namespace std;

int N, bil[11];
bool pernah[11], bisa;

void zigzag(int a){
	if(a>=N){
		//cetak, tapi cek aturan
		if(N<3){
			for(int i=0; i<N; i++){
				printf("%d", bil[i]);
			}
			printf("\n");
		}else{
			for(int i=0; i<=N-3; i++){
				if(bil[i+1]>bil[i]&&bil[i+1]>bil[i+2] || bil[i+1]<bil[i]&&bil[i+1]<bil[i+2]){
					bisa=true;
				}else{
					bisa=false;
					break;
				}
			}
		
			if(bisa){
				for(int i=0; i<N; i++){
					printf("%d", bil[i]);
				}
				printf("\n");
			}
		}
	}else{
		for(int i=1; i<=N; i++){
			if(!pernah[i]){
				pernah[i]=true;
				bil[a]=i;
				zigzag(a+1);
				pernah[i]=false;
			}
		}
	}
}
int main(){
	
	scanf("%d", &N);
	zigzag(0);
	
	return 0;
}
