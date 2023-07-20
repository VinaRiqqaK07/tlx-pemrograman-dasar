#include <iostream>
using namespace std;

int a, b, x;

int Fungsi(int y){
	int f;
	
	f = a*y+b;
	
	if(f<0){
		f = -1*f;
	}else{
		return f;
	}
	
	return f;
}


int main(){
	int k;
	
	scanf("%d %d %d %d", &a, &b, &k, &x);
	for(int i=0; i<k; i++){
		x = Fungsi(x);
	}
	
	printf("%d", x);
	return 0;
}
