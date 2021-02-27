#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

struct nodo{
     int nro;
     struct nodo *izq, *der;
};

typedef struct nodo *Arbol;

Arbol crearNodo(int x){
     Arbol nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
Arbol arbol = NULL;
void insertar(Arbol &arbol, int x){
     if(arbol==NULL){
           arbol = crearNodo(x);
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}

void preOrden(Arbol arbol){
     if(arbol!=NULL){
          cout << arbol->nro <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(Arbol arbol){
     if(arbol!=NULL){
          enOrden(arbol->izq);
          cout << arbol->nro << " ";
          enOrden(arbol->der);
     }
}

void postOrden(Arbol arbol){
     if(arbol!=NULL){
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}

void verArbol(Arbol arbol, int n){
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);
     for(int i=0; i<n; i++)
         cout<<"   ";
     cout<< arbol->nro <<endl;
     verArbol(arbol->izq, n+1);
}

void ingresardatos(){
    //Arbol arbol = NULL; 
	int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo
    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;
    for(int i=0; i<n; i++){
        cout << " Numero del nodo " << i+1 << ": ";
        cin >> x;
        insertar(arbol, x);
    }	
}

int main(){
      
	// creado Arbol
int opt;
do{
	system("cls");
	cout << "ARBOL BINARIO DE BUSQUEDA"<<endl;
	cout <<"1 Ingresar Datos al Arbol"<<endl;
	cout <<"2 Mostrar Arbol"<<endl;
	cout <<"3 Recorrido En Orden"<<endl;
	cout <<"4 Recorrido Pre Orden"<<endl;
	cout <<"5 Recorrido Post Orden"<<endl;
	cout <<"Ingrese una Opcion"<<endl;
	cin>>opt;
	
	switch(opt){
		case 1: system("cls");ingresardatos();break;
		case 2: system("cls"); cout<< "Mostrando Arbol"<<endl; verArbol(arbol,0); cout<<"."<<endl;system("pause"); break;
		case 3: system("cls"); cout<< "Recorrido En Orden"<<endl;enOrden(arbol); break;
		case 4: system("cls"); cout<< "Recorrido Pre Orden"<<endl;preOrden(arbol);break;
		case 5: system("cls"); cout<< "Recorrido Post Orden"<<endl;postOrden(arbol);break;
		default: cout<<"opcion no valida"<<endl;
	}

}while (opt!=5);

   

    

    cout << endl << endl;
/*
char cadena[128];
int num;
   ifstream fe("numeros.txt");

   while(!fe.eof()) {
      fe >> cadena;
      num = atoi(cadena);
      insertar(arbol,num);
      //cout << cadena << endl;
   }
   fe.close();
   
   */
   /*
    cout << "\n Mostrando Arbol \n\n";
	verArbol( arbol, 0);
    cout << "\n Recorridos del Arbol";
    cout << "\n\n En orden   :  ";   enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    cout << "\n\n Post Orden :  ";   postOrden(arbol);
    cout << endl << endl;
    
    */
    system("pause");
    return 0;
}
