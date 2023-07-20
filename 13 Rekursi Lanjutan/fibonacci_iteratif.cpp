//REKURSI LANJUT
//Fibonacci dalam iteratif O(N)
//0, 1, 1, 2, 3, 5

#include <iostream>
using namespace std;

int main(){
	int a=0, b=1, total=0, n;
	
	scanf("%d", &n);
	
	for(int i=2; i<=n; i++){
		total=a+b;
		if(i>2){
			a=b;
			b=total;
		}
	}
	
	printf("%d", total);
	
	return 0;
}
