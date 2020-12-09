#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	int vetor[5];
	
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;
	
	//sizeof(nome_vetor) -> tamanho em Bytes / 4

	for(int c = 0; c < sizeof(vetor)/4; c++){
		
		cout << vetor[c] << "\n";
	}
	
	int vetordois[5] = {11, 21, 31, 41, 51};
	
	for(int t = 0; t < sizeof(vetordois)/4; t++){
		cout << vetordois[t] << "\n";
		
	}
	
	
	
	
	return 0;
}
