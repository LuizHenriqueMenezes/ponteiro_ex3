/***** 
3 Faça um método que peça 2 (dois) números inteiros, e mostre no vídeo todos os números ímpares entre eles (incluindo-os). Os dois valores 
podem ser informados em qualquer ordem, devendo o programa trata-los de forma adequada.

Obs. Os parâmetros do método deve ser dois ponteiros de inteiros. Manipule-os corretamente dentro do método.
******/

#include <iostream>

using namespace std;

void impar(int * a, int * b);
int main(int argc, char** argv) {
	

	 int a;
	 int b;
	 int *p, *p1;

	 cout << "\nDigite um numero: "; cin >> a;
	 cout << "\nDigite outro numero: "; cin >> b;
	 p=&a;
	 p1=&b;
	 
	 impar(p,p1);

	
	return 0;
}

void impar (int *a, int *b){
           int temp;
	if(*a>*b){
		temp = *a;


	 *a = *b;
	 *b = temp;
}
for(int i=*a; i<=*b; i++){
	if( i % 2 !=0)
	cout<<i<<"\n";
}
}




