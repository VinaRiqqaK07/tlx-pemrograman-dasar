//semangat

#include <iostream>
using namespace std;

void gunung(int a){
	
	if(a==1){
		printf("*\n");
	}else{
		gunung(a-1);
		for(int i=0; i<a; i++){
			printf("*");
		}printf("\n");
		gunung(a-1);
	}
	
}

int main(){
	int N;
	
	scanf("%d", &N);
	gunung(N);
	
	return 0;
}
