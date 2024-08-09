//exemplo pessoal (mais simples)
#include <iostream>
using namespace std;

void selection_sort(int vet[], int tam){
	int menor,aux;
	
	for (int i=0; i<tam-1; i++){ //nao pode ir ate o ultimo elemento pois o j vai
		menor=i;
		
		for (int j=i+1; j<tam; j++){ // sempre um elemento depois do i (i+1)
			if (vet[j]<vet[menor]){
				menor = j;
			}
			
		}
		if (i!=menor){
			aux = vet[i];
			vet[i] = vet[menor];
			vet[menor] =aux;
		}
	}
}

int main(){
	int tamanho=5;
	int vetor[5]={5,9,4,7,2}; 
	
	selection_sort(vetor,tamanho);
	
	//printando
	for (int i=0; i<tamanho; i++){
		cout<<"["<<vetor[i]<<"] ";
	}
	
	return 0;
}

