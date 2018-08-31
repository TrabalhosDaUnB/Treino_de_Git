#include <iostream>

using namespace std;
double numero_1 = 0, numero_2 = 1;
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
	float numero1, numero2;
	float soma;
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	soma = numero1 + numero2;
	cout << "O resultado da soma é: " << soma << endl;
	return 0;

}

double fazDivisao(){

	double resultado_divisao = 0.0, numero_1 = 0.0, numero_2 = 0.0;


	cin >> numero_1;
	cin >> numero_2;

	resultado_divisao = (numero_1/numero_2);
	cout << "resultado" << resultado_divisao<< endl;
	return resultado_divisao;

}

int fazMultiplicacao(){

	cout << "mult" << endl;
	return 0;
}


int fazSubtracao(){
	int valor1, valor2;

	cout << "Entre com o primeiro valor: ";
	cin >> valor1;
	cout << "Entre com o segundo valor: ";
	cin >> valor2;
	cout << valor1 - valor2 << endl;
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
