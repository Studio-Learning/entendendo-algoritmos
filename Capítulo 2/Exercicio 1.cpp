//capitulo 2 - ex 1
#include <iostream>
#include <vector>
using namespace std;

// Função para buscar o índice do menor elemento no vetor
int buscarMenor (int vet[], int tam){
	int menor = vet[0];  // Assume que o primeiro elemento é o menor
	int menor_indice=0; // Índice do menor elemento
	
	for (int i=1; i<tam; i++){// Começa a partir do segundo elemento
		if (vet[i]<menor){
			menor= vet[i];
			menor_indice=i;
		}
	}
	return menor_indice;
}

// Função para ordenar o vetor
void ordenado (int vet[], int tam){
	vector<int> novo_vet; 
	int tamanho_original = tam;
	
	for (int i=0; i<tamanho_original; i++){
		int menor = buscarMenor(vet, tam);
		novo_vet.push_back(vet[menor]);
		
		// Remove o menor elemento do vetor original
		for (int j = menor; j < tam - 1; j++) {
            vet[j] = vet[j + 1];
        }
        tam--; // Reduz o tamanho do vetor
	}
	
	// Copia o vetor ordenado de volta ao vetor original
	 for (int i = 0; i < novo_vet.size(); i++) {
        vet[i] = novo_vet[i];
    }
	
}

int main(){
	int vetor [6] = {8,6,9,4,5,2};
	
	cout<< "Antes:"<< endl;
	for (int i=0; i<6; i++){
		cout<<"["<<vetor[i]<<"] ";
	}
	
	ordenado(vetor, 6);
	
	cout<<endl;
	cout<< "Sorted:"<< endl;
	for (int i=0; i<6; i++){
		cout<<"["<<vetor[i]<<"] ";
	}
	return 0;
}
