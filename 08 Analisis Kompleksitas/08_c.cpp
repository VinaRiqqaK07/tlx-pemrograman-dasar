#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i, n, j, prima;
	int a;
	
/*	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(j=0; j<n; j++){
		printf("%d", a[j]);
	}
*/	
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &a);
		
		prima = 0;
		
		for(j=1; j*2<=a; j++){
			if(a%j==0){
				prima = prima + 1;
			}
			
			if(prima>3){
				break;
			}
			
		}
		
		
		if(prima<=3){
			printf("YA\n");
		}else{
			printf("BUKAN\n");
		}
	}
	
	
	return 0;
}
