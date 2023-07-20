#include <iostream>
#include <math.h>
using namespace std;



int Tingkat(int o, int p, int q, int r, int d){
	
	return pow(abs(o-p), d) + pow(abs(q-r), d);
}

int main(){
	int n, d; scanf("%d %d", &n, &d);
	int x[n], y[n], T, max=-1, min=2000001;
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			T=Tingkat(x[i], x[j], y[i], y[j], d);
			
			if(T>max){
				max=T;
			}
			
			if(T<min){
				min=T;
			}
		}
	}
	
	printf("%d %d", min, max);
	return 0;
}
