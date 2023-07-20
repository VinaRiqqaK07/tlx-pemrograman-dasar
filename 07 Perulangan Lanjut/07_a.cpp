#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i, n;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(i%10==0){
			continue;
		}
		if(i==42){
			printf("ERROR");
			break;
		}
		printf("%d\n", i);
	}
	
	return 0;
}
