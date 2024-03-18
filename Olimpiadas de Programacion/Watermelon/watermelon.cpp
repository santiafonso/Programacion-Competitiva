#include<bits/stdc++.h>			//libreria standar de c++

using namespace std; 	 		//ahorra tiempo en escribir std

int main(){

	int w;			
	cin >> w;			//leo el estandar input
	
	if (w!=2 && w % 2 == 0){		//mod 2 w, es par
		cout << "YES" << endl;
	}

	else{
		cout << "NO" << endl;
	}
}

