
#include <iostream>
using namespace std;

int a, b, k;

int Fungsi(int n){
	int fx;
	
	if(k>1){
		k--;
		return Fungsi(Fungsi(n));
	}else{
		fx=a*n+b;
		if(fx<0){
			fx=fx*-1;
		}
		return fx;
	}
	
	
}

int main(){
	int x;
	
	scanf("%d%d%d%d", &a, &b, &k, &x);
	
	printf("%d", Fungsi(x));
	return 0;
}
