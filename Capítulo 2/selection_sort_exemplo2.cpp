//exemplo do livro (artistas mais ouvidos) - struct
#include <iostream>
using namespace std;

//struct dos artistas
struct st_artista{
	char nome [50];
	int plays;
} typedef artista;

//ordenando
void ordenar_artistas(artista vet[], int tam){
	artista aux;
	
	for (int i=0; i<tam-1; i++){
		int maior = i;
		
		for (int j=i+1; j<tam; j++){
			if (vet[j].plays>vet[maior].plays){
				maior = j;
			}
		}
		
		if (i!=maior){
			aux = vet[i];
			vet[i] = vet[maior];
			vet[maior] =aux;
		}
	}
}

int main (){
	int tamanho = 7;
	
	//declarando valores dentro do struct
	artista vetor[tamanho]={
		{"Radiohead", 156},
		{"Kishore Kumar", 141},
		{"The Black Keys", 35},
		{"Neutral Milk Hotel", 94},
		{"Beck", 88},
		{"The Strokes", 61},
		{"Wilco", 111}
	};
	
	//printando antes de ordenar:
	cout<<"ARTISTAS NO ALEATORIO: "<<endl;
	for (int i = 0; i < tamanho; i++) {
        cout << "Artista: " << vetor[i].nome << " - Plays: " << vetor[i].plays << endl;
    }
    
    cout<<endl;
	ordenar_artistas(vetor, tamanho);
	
	//printando artistas mais ouvidos
	cout<<"ARTISTAS MAIS OUVIDOS: "<<endl;
	for (int i = 0; i < tamanho; i++) {
        cout << "Artista: " << vetor[i].nome << " - Plays: " << vetor[i].plays << endl;
    }
	return 0;
}
