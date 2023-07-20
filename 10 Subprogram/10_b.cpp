#include <iostream>
using namespace std;

void Tukar(int &x, int &y){
	int temp;
	
	temp = x;
	x = y;
	y = temp;
}

int main(){
	int n; scanf("%d", &n);
	int x[2][n];
	int i, j, t;
	char p[5], q[5];
	
	for(i=0; i<2; i++){
		for(j=0; j<n; j++){
			scanf("%d", &x[i][j]);
		}
	}

	
	scanf("%d", &t);
	for(int m=0; m<t; m++){
		scanf("%s %d %s %d", p, &i, q, &j);
		int a = p[0] - 'A';
		int b = q[0] - 'A';
		
		Tukar(x[a][i-1], x[b][j-1]);
		//Sa sempat WA karena pake if-else cek p A atau B
	}
	
	
	for(i=0; i<2; i++){
		for(j=0; j<n; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
