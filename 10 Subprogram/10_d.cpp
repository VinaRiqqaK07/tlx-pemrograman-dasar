#include <iostream>
using namespace std;

int i=0, j=0;

int Prima(int x){
	int a=2;
	
	while(x%a!=0){
		a++;
	}
	
	return a;
}

int Pangkat(int &y, int div){
	int b=0;
	
	while(y>1){
		if(y%div==0){
			y=y/div;
			b++;
		}else{
			return b;
		}
		
	}
	
	return b;
}

int main(){
	int n, x[10], y[20];
	
	scanf("%d", &n);
	while(n>1){
		x[i] = Prima(n);
		y[j] = Pangkat(n, x[i]);
		i++; j++;
	}
	
	for(i=0; i<j; i++){
		if(y[i]==1){
			printf("%d", x[i]);
		}else{
			printf("%d^%d", x[i], y[i]);
		}
		
		if(i!=j-1){
			printf(" x ");
		}
	}
	
	return 0;
}
