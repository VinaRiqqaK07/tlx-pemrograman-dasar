//PENAMPIL FAKTOR PRIMA

#include <iostream>
using namespace std;

int a=2, b=0;

void Bagi(int x){
	
	while(x%a!=0){
		a++;
	}
	printf("%d", a);
	
	
}

void Pangkat(int &x){
	b=0;
	while(x%a==0){
		x=x/a;
		b++;
	}
	
	if(x>1){
		if(b>1){
			printf("^%d x ", b);
		}else{
			printf(" x ");
		}
	}else{
		if(b>1){
			printf("^%d", b);
		}
	}
	
}

int main(){
	int n;
	scanf("%d", &n);
	
	while(n>1){
		Bagi(n);
		Pangkat(n);
	}

	return 0;
}
