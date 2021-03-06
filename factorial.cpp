#include <iostream> 
using namespace std;
/*
int main(){
   int i;
   int fact=1;
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   if(numero<0) fact =0;
   else if(numero==0) fact=1;
   else{
      for (i = 1; i <= numero; i++){
         fact = fact*i;
      }
   }
   cout<<"Factorial de "<<fact<<endl;
   system("pause");
}
*/
//Caso base
//Caso recursivo
//casos opcionales


int factorial(int n) {
   if(n < 0) 
   	return 0;
   else if(n > 1) 
   	return n*factorial(n-1);
   return 1;
}
int main() {
   int numero;
   cout<<"ingresa un numero: ";
   cin>>numero;
   cout<<"Factorial de "<<factorial(numero)<<endl;
}



