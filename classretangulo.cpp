#include <iostream>
using namespace std;
class retangulo{
	public:
	float lado1,lado2,area, perimetro;
	retangulo(){
		lado1=0;
		lado2=0;
		area=0;
		perimetro=0;
	}
	void calculaarea(float lado1,float lado2){
		float res;
		res=lado1*lado2;
		cout<<"AREA:"<<res<<endl;
	}
	float calculaperimeto(float lado1,float lado2){
		return 2*(lado1+lado2);
	}
	
};
int main(int argc, char *argv[])
{
	retangulo p1;
	p1.calculaarea(10,5);
	cout<<"PERIMENTO:"<<p1.calculaperimeto(10,5)<<endl;
		p1.calculaarea(10,7);
	cout<<"PERIMENTO:"<<p1.calculaperimeto(10,7)<<endl;
	
	return 0;
}