//ex_1_cap_1
#include <iostream>
using namespace std;

void pesquisabinaria (int array[], int item, int len){
	int baixo =0;
	int alto = len;
	
	while (baixo<=alto){
		int meio =(baixo+alto)/2;
		int chute = array[meio];
		if (chute ==item){
			cout<< "elemento encontrado em "<<meio<<endl;
			return;
		}
		else if(chute>item){
			alto = meio-1;
		}
		else{
			baixo = meio+1;
		}
	}
	cout<< "elemento nao encontrado"<<endl;
	return;
}

int main (){
	int array[]= {2,10,23,44,100,121};
	int len = sizeof(array)/sizeof(int);
	//cout<<sizeof(array)<<endl;
	//cout<<sizeof(int)<<endl;
	
	pesquisabinaria(array, 3, len); //caso nao encontrado
	pesquisabinaria (array,2,len); //encontrado no inicio
	pesquisabinaria (array,44,len); //encontrado no meio
}
