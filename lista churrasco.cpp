#include <iostream>

using namespace std;

class celula
{
private:
	string nome;
	string llista;
	celula * proxima;
public:
	celula()
	{
		proxima = NULL;
	}
	celula(string n)
	{
		nome = n;
	}
	celula(string n, celula *p)
	{
		nome = n;
		proxima = p;
	}
	celula(string n, string ll, celula *p){
		nome = n;
		llista = ll;
		proxima = p;
	}
	string getNome()
	{
		return nome;
	}
	void setNome(string n)
	{
		nome = n;
	}

	celula * getProxima()
	{
		return proxima;
	}

	void setProxima(celula * l)
	{
		proxima = l;
	}
	string getLlista(){
		return llista;
	}
	void setLlista(string ll){
		llista= ll;
	}
};


class lista
{
private:
	celula * inicio;

public:
	lista()
	{
		inicio = NULL;
	}
	~lista(){
		esvaziar();
	}
	lista(celula *i)
	{
		inicio = i;
	}
	celula * getInicio()
	{
		return inicio;
	}

	void inserirInicio(string n, string ll)
	{
		celula *nova = new celula;
		nova->setNome(n);
		nova->setProxima(inicio);
		nova->setLlista(ll);
		inicio = nova;
	}

	void inserirFim(string n, string ll)
	{
		if(inicio == NULL)
		{
			inserirInicio(n, ll);
		}
		else
		{
			celula *aux = inicio;
			while(aux->getProxima() != NULL)
			{
				aux = aux->getProxima();
			}
			celula *nova = new celula(n, ll, NULL);
			aux->setProxima(nova); 
		}
	}


	void imprimir()
	{
		if(inicio == NULL)
		{
			cout << "Lista vazia.\n";
		}
		else
		{
			celula *aux = inicio;
			while(aux != NULL)
			{
				cout << aux->getNome() << " - " << aux->getLlista() << endl;
				aux = aux->getProxima();
			}
		}
	}
	
	void esvaziar(){
		celula *aux = inicio;
		while(aux != NULL){
			inicio = inicio->getProxima();
			delete aux;
			aux = inicio;
		}
		cout << "\n----Memoria liberada----\n";
	}
};

int main()
{
	cout<<"               Churrasco  "<<endl;
	lista listaChurrasco;
	
	listaChurrasco.inserirFim("Matheus", "18 anos, Masculino, bebe.");
	listaChurrasco.inserirFim("    Zoi", "20 anos, Masculino, bebe.");
	listaChurrasco.inserirFim("Leticia", "22 anos, Feminino, nao bebe.");
	listaChurrasco.imprimir();
	return 0;
}