#include <iostream>
using namespace std;

int main(){
	int n, i, bil, max, min;

	
	scanf("%d", &n);
	scanf("%d", &bil);
	max = bil; min = bil;
	
	for(i=n-1; i>0; i--){
		scanf("%d", &bil);
		
		if(bil>max){
			max = bil;
		}else if(bil<min){
			min = bil;
		}
	}
	printf("%d %d", max, min);
	
	return 0;
}
