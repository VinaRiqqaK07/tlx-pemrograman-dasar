#include <iostream>
#include <cstdio>


using namespace std;

int main(){
	int n, i, j, k;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=n; j>i+1; j--){
			printf(" ");
		}
		
		for(k=0; k<=i; k++){
			printf("*");
		}
		
	printf("\n");
	}
	return 0;
}
