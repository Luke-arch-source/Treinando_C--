#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){
	
	int l, c;
	int matriz[3][4];
	
	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
	
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
	
	for(l = 0; l < 3; l++){
		for(c=0; c < 4; c++){
			cout << matriz[l][c] << " ";

		}
		cout << "\n";
		
	}
	
	

	
	
	return 0;
}
