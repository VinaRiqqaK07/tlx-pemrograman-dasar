#include <iostream>
using namespace std;

struct Titik{
	int x1, x2;
	int y1, y2;
};

struct Posisi{
	int x, y;
};

int main(){
	Titik T;
	Posisi M;
	int m;
	
	scanf("%d %d %d %d", &T.x1, &T.y1, &T.x2, &T.y2);
	
	
	M.x = T.x1-T.x2;
	M.y = T.y1-T.y2;
	
	if(M.x>=0 && M.y>=0){
		printf("%d", M.x+M.y);
	}else if(M.x>=0 && M.y<0){
		printf("%d", M.x+-1*M.y);
	}else if(M.x<0 && M.y>=0){
		printf("%d", -1*M.x+M.y);
	}else if(M.x<0 && M.y<0){
		printf("%d", -1*M.x+-1*M.y);
	}
	
	return 0;
}
