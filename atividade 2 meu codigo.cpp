#include <iostream>
using namespace std;
class celula
{
private:
	string nome;
	celula * proxima;
public:
	celula (){
		proxima = NULL;
	}
	string getNome(){
		return nome;
	}
	celula(string a){
		nome =a;
	}
		void setNomee(string a){
		nome=a;
	}
	celula *getProxima(){
		return proxima;
	}
	void setProxima(celula*l){
		proxima =l;
	}
};
class lista{
private :
	celula * inicio;	
public:	
	lista(){
	inicio = NULL;	
	}
	celula * getInicio(){
		return inicio;
	}
		void inserirInicioo(string a){
		celula * nova = new celula;
		
		nova->setNomee(a);
		nova->setProxima(inicio);
		inicio=nova;
	}
			void inserirFimm(string a){
		celula *nova = new celula(a);
		nova->setProxima(NULL);
		if(inicio != NULL)
		{			
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			aux->setProxima(nova);
		}
		else{
			inicio = nova;
		}
	}
	
	void imprimir(){
		if(inicio==NULL){
			cout<<"lista vazia.\n";
		}
		else{
			celula* aux= inicio;
			while (aux !=NULL){ 
				cout<<aux->getNome()<<endl;
			aux =aux->getProxima();
			}
		}
	}
};
int main(int argc, char *argv[])
{
lista listaalunos;
	listaalunos.inserirInicioo("zoi");
	listaalunos.inserirFimm("matheus");

	
	listaalunos.imprimir();
}