//quadtree

#include <iostream>
#include <string>
using namespace std;

int R, C, a[128][128], njawaban=0;
string jawaban[128*128];

bool homogen(int r, int c, int l){
	int val = a[r][c];
	for(int i=r; i<r+l; i++){
		for(int j=c; j<c+l; j++){
			if(a[i][j]!=val){
				return false;
			}
		}
	}
	return true;
}

void quadtree(int rows, int columns, int k, string s){
	
	if(homogen(rows, columns, k)){
		if(a[rows][columns] == 1){
			jawaban[njawaban] = "1" + s;
			njawaban++;
		}
	}else{
		quadtree(rows, columns, k/2, s+"0");
		quadtree(rows, columns+(k/2), k/2, s+"1");
		quadtree(rows+(k/2), columns, k/2, s+"2");
		quadtree(rows+(k/2), columns+(k/2), k/2, s+"3");
	}
	
}


int main(){
	bool kelipatan;
	int n, pow2;
	
	scanf("%d %d", &R, &C);
	
	n = max(R, C);
	while(n>1){
		if(n%2!=0){
			kelipatan = false;
			break;
		}else{
			n=n/2;
		}
	}
	
	if(!kelipatan){
		pow2=1;
		while(pow2<max(R, C)){
			pow2 *= 2;
		}	
	}
 
	for(int i=0; i<pow2; i++){
		for(int j=0; j<pow2; j++){
			a[i][j]=0;
		}
	}
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			int x[R][C];
			scanf("%d", &x[i][j]);
			a[i][j]=x[i][j];
		}
	}
	
	quadtree(0, 0, pow2, "");
	printf("%d\n", njawaban);
	
	for(int i=0; i<njawaban; i++){
		printf("%s\n", jawaban[i].c_str());
	}
	
	return 0;
}
