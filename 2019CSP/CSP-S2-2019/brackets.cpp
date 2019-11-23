#include <bits/stdc++.h>
using namespace std;

int father[50001];

//dp[50001]

//not completed    ()()(()) math 4 times 

long long  check(const string  str){
	long long  ans =0;
	stack<char> st;
	int len = str.length();
	
	for(int i=0; i<len; i++){	
		
		if( str[i]=='(' && (  !st.empty() && st.top()==')'  ) ) {
			st.pop();
			ans++;
		}
		else    st.push( str[i]);
	
	}
	return ans;
}

int main(){
	int n; cin >> n;
	string  node;	cin >> node;
	
	father[1] = 0;
	for(int i=2;i<=n;i++){
		cin >> father[i];
	} 
	
	long long  sum = 0;
	for(int i=2; i<=n; i++){
		string s="";
		int p=i;
		while( p!=0 ){
			s = s + node[p-1];
			p = father[p];
		}
		
		//cout << s <<":";
		int k=check(s);
		//cout << i << ":" << k<< endl;	
		sum = sum ^ (i*k); 				
	}
	
	cout << sum;
	
	return 0;
} 
