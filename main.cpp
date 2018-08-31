#include <iostream>

using namespace std;

int fazSoma();
double fazDivisao();
int fazMultiplicacao();
int fazSubtracao();
void printaMenu();
int opcaoMenu(int opcao);

int main(){
	
	cout << "hello world!" << endl;
	return 0;

}

int fazSoma(){

	cout << "soma" << endl;
	return 0;

}

double fazDivisao(){
	cout << "divisao" << endl;
	return 0;

}

int fazMultiplicacao(){

	cout << "mult" << endl;
	return 0;
}


int fazSubtracao(){
	cout << "sub" << endl;
	return 0;

}

void printaMenu(){

	int opcao = 0;
	cout << "\n Selecione uma opcao" << endl;
	cout << "1 - Soma " << endl;
	cout << "2 - Subtracao " << endl;
	cout << "3 - Multiplicacao " << endl;
	cout << "4 - Divisao " << endl;
	cout << endl;
	cin >> opcao;
	opcaoMenu(opcao);
}



int opcaoMenu(int opcao){


	float resultado = 0;

	switch(opcao){
	case 1:
		resultado = fazSoma();
		break;
	case 2:
		resultado = fazSubtracao();
		break;
	case 3:
		resultado = fazMultiplicacao();
		break;
	case 4:
		resultado = fazDivisao();
		break;
	default:
		resultado = 1.0;
		break;
	}
	return resultado;
}
