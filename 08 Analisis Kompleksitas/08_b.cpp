#include <iostream>
#include <cstdio>

using namespace std;

/* MASIH BISA DIPERBAIKI OUTPUTNYA. SAMA DENGAN YANG ADA DI LATIHAN ENTAH KE-BERAPA*/

int main(){
	int n, i, j, b[n], a;
	bool prima;

/*	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	n = 0;
	
	for(j=2; j*j<=a[n]; j++){
		
		if(a[n]%j==0){
				prima = false;
				break;
			}else{
				prima = true;
			}
		
		if(a[n]==2){
			prima = true;
		}
		
		if(prima){
			printf("YA\n");
		}else{
			printf("BUKAN\n");
		}
		
		n++;
		
	}
*/
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &a);
		
		for(j=2; j*j<=a; j++){
			if(a%j==0){
				prima = false;
				break;
			}else{
				prima = true;
			}
			
		}
		
		if(a==2){
			prima = true;
		}
		
		if(prima){
			printf("YA\n");
		}else{
			printf("BUKAN\n");
		}
	}

	return 0;
}
