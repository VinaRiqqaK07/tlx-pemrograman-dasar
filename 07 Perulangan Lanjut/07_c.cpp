#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i, n, j, a;
	
	a=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(a==10){
				a=0;
			}
			printf("%d", a);
			a++;
		}
	printf("\n");
	}
}
