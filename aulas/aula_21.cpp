#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << argv[1] << "\n\n";
	cout << argc << "\n";
	
	if(argc > 1){
		if(!strcmp(argv[1], "sol")){
			cout << "Vou ao clube.\n\n";
			
		} else if(!strcmp(argv[1], "nublado")){
			cout << "Vou ao cinema.\n\n";
		} else{
			cout << "Vou ficar em caa.\n\n";
		}
	}
	
	cout << "  " << "\n";
	for(int c = 0; c <= (argc - 1); c++){
		cout << argv[c] << "\n";
	}
	
	system("pause");
	return 0;
}
