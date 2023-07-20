//quadtree terinvers
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int nbanyak, a[128][128], R, C, itemp=1;
string jawaban[128*128];

void initialize(){
	for(int i=0; i<itemp; i++){
		for(int j=0; j<itemp; j++){
			a[i][j]=0;
		}
	}
}

void quadtree_reverse(int rows, int columns, int k, string s){
//	string a=s.substr(1, 1);
	if(s.length()>1){
		if(s.substr(1, 1)=="0"){
			s.erase(1, 1);
			quadtree_reverse(rows, columns, k/2, s);
		}else if(s.substr(1, 1)=="1"){
			s.erase(1, 1);
			quadtree_reverse(rows, columns+(k/2), k/2, s);
		}else if(s.substr(1, 1)=="2"){
			s.erase(1, 1);
			quadtree_reverse(rows+(k/2), columns, k/2, s);
		}else if(s.substr(1, 1)=="3"){
			s.erase(1, 1);
			quadtree_reverse(rows+(k/2), columns+(k/2), k/2, s);
		}
	}else{
		if(s.substr(0, 1)=="1"){
			for(int i=rows; i<rows+k; i++){
				for(int j=columns; j<columns+k; j++){
					a[i][j]=1;
				}
			}	
		}
	}
}

int main(){
	bool kelipatan=true;
	scanf("%d", &nbanyak);
	for(int i=0; i<nbanyak; i++){
		cin >> jawaban[i];
	}
	scanf("%d %d", &R, &C);
	
	//cek kelipatan r c
	int n = max(R, C);
	while(n>1){
		if(n%2!=0){
			kelipatan=false;
			break;
		}else{
			n=n/2;
		}
	}
	
	if(!kelipatan){
		n=max(R, C);
		while(itemp<n){
			itemp *= 2;
		}
		n=itemp;
	}else{
		n=max(R, C);
	}
	
//	initialize();
	
	for(int i=0; i<nbanyak; i++){
		quadtree_reverse(0, 0, n, jawaban[i]);
	}
	
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
