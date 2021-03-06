#include <iostream>

using namespace std;

static int fibonacci_r(int n);
static int fibonacci_i(int n);

int main(){
int numero;
	cout<<"ingrese numero: "<<endl;
	cin>>numero;
	cout<<"El Fibonacci de "<<numero << " es: "<<fibonacci_r(numero)<<endl;	
	cout<<"El Fibonacci de "<<numero << " es: "<<fibonacci_i(numero)<<endl;
}

static int fibonacci_r (int n)
{
if(n>=0){
 if ((n==0) ||(n==1)){
 	return 1;
 }else{
 	return fibonacci_r(n-1) + fibonacci_r(n-2);	
 }
}else 
	return 0; 
} 

static int fibonacci_i (int n){
 int actual, ant1, ant2;
 ant1 = ant2 = 1;
 if ((n == 0) || (n == 1)) {
 actual = 1;
 }else{
 	for (int i=2; i<=n; i++) {
 		actual = ant1 + ant2;
 		ant2 = ant1;
 		ant1 = actual;
 	}
 }
 return actual;
} 

