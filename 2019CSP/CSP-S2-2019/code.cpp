#include <bits/stdc++.h>
using namespace std;

// 用 bitset  避免复杂的位运算
int main(){
	
	int n;  cin >> n ; 
	
	int p= n-1;
	unsigned long long kk;  cin >> kk; 
	cout << kk <<endl;
	
	bitset<64>  ans;
    bitset<64>  k(kk);
  
	
	ans[p] =   k[p];	 //	ans.set(p, k[p]);

	while( p>=0 ){
		p--;
		ans[p] =   k[p+1] ^  k[p];
		//cout << "ans" << ans <<endl;
	} 
	
	for(int i=n-1; i>=0; i--)  
 		cout <<  ans[i];
		
	return 0;
} 
