#include <bits/stdc++.h>
using namespace std;

int mianban[ ] = {1, 2, 4, 8, 16, 32 ,64, 128, 256 }; //Ãæ°å 

int main(){
	int x, y ; cin >> x >> y;
	
	int pig = 0;
	while(x<y){
		
		for(int i=8; i>=0; i--){
			if(  x + mianban[i] <= y  ) {
				x = x + mianban[i];  cout << x <<endl;
				pig ++;
				break;
			} 
		}		
	}	
	cout << pig;
	return 0;
} 
