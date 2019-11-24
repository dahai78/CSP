#include <bits/stdc++.h>
using namespace std;

int mianban[9] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

int main(){
	int x , y; cin >> x >> y;
	
	int pig = 0;
	while( x<y ){		
		for(int i=8; i>=0; i--){
			if( x + mianban[i] <=y  ) {
				x = x + mianban[i];
				pig = pig + 1;
				break;
			}					
		}			
	}
	cout << pig;
	return 0;
} 
