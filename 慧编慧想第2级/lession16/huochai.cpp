#include <bits/stdc++.h>
using namespace std;

int hc[ 100000 ] = { 6, 2, 5, 5, 4, 5, 6 ,3 ,7, 6 }; //»ð²ñÊý 

int main(){
	
	int n; cin >> n;
	
	for( int i= 10 ; i<=999; i++){
		int ans =0;
		int m = i;
		do{
		 	ans = ans +	hc[	m % 10 ] ;
		 	m = m / 10;			
		} while (m!=0);
		
		hc[i] = ans;		
	} 
	
	int result = 0;
	for(int i=0; i<=999; i++){
		for(int j=0; j<=999; j++){
			if( i+j<=999 && hc[i] + hc[j]  + hc[i+j] +  2 + 2 == n ) {
				cout << i << "+" << j << "=" << i+j << endl;
				result++;
			}		
		}
	}
	
	cout << result;
	return 0;
} 
