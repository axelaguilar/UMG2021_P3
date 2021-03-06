#include <iostream>

using namespace std;
double potencia(int,int);

int main(){
	int x,y;
	cout << "Introduzca numero 1:  ";
	cin >> x;

	do{
		cout << "Introduzca numero 2:  ";
		cin >> y;
	}while(y < 0);
		cout << x << " Elevado a " << y << " = " << potencia(x,y) << endl;
		system("pause");
	
}
	double potencia(int x, int y)
	{
		if(y==0){
			return 1;	
		}else{
			return x*(potencia(x,y-1));
		}	
	}

