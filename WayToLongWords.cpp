#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	for (int i = 0; i < a; i++){
		string z;
		cin >> z;
		if(z.size() > 10){
			cout << z[0] << z.size() - 2 << z[z.size()-1] << endl;
		}else{
			cout << z << endl;
		}
	}
	return 0;
}