#include <iostream> 
#include <math.h>
using namespace std;

int elevator (int n, int el){
	
	if(el == 0){
		return 1;
	}else{
	
		return n*elevator(n, el -1);
	}	
}


int main(){
	int numero1;
	int numero2;
	cout<<"ingrese numero"<<endl;
	cin>>numero1;
	cout<<"ingrese numero exponencial"<<endl;
	cin>> numero2;
	cout<<"el numero a elevar es" << elevator(numero1,numero2)<<endl;
	
	for(int i=1; i<=numero2; i++){
				total = total * numero1;
	}		
	cout<<n<<" elevado por "<<numero2<<" es igual a = "<<total<<endl;
}
