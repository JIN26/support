/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ANGEL
 *
 * Created on 21 de marzo de 2019, 07:10 PM
 */

#include <iostream>//libreria principal;
#include <stdlib.h>//sirve para agregar comandos a la principal;
#include <math.h>//sirve para agragar comandos matematicos mas complejos
#include <string.h>//sirve para agregar comando de string 
#include <ctime>//funciones de time, esta libreria hace lo mismo #include <time.h>
#include "Jin.h"
#include "Personaje.h"

const int TAM =15;

using namespace std;

/*
 * 
 */
 
int global=0;// una  variable global pero actualmente se toma como una mala practica por el mal uso de la memoria
int factorial(int num=0);//valores por defecto para los parametros;
int * muestra(int *v=0,int x=0,int **p=0);

int main(int argc, char** argv) {
	
//-----------------Declaracion de variables--------------------------  

	srand(time(NULL));//crea semilla nula para el rand (verdaderos n° aleatorios) time(NULL) retorna conteo de segundos actual
	//system("color 3f");	    
	//system("mode 129"); 
	//tipo entero: 8, -9, 10 16bits -32768 hasta 32767 2^16;=decimal
	unsigned long int x;//es igual a los enteros pero con mas capacidad y solo acepta positivos;=decimal
	signed short int y=1;//es igual a los enteros pero mas corto y acepta positivos y negativos;
    static int a;
    int vector[TAM]= {9,8,7,6,5,4,3,2,1,0};//declaracion de vector
	//se pueden crear arreglos con la cantidad de dimensiones que necesites
    int matriz[3]/*N° de matricez*/[10]/*fila*/[10]/*columna*/; 
    int *p=new int,*ptr=NULL;//new da el tamño de memoria asignada en este caso un int; 
    float f1=5.46; //flotante: 1.53, 5.64, 5 32bits 2^32;=float
    long double f2=19.8; //flotante: 64bits 2^64
	char n; //1 bit tipo char o craracter: 'a', 4 //(no entiende el 4);=character
    char s[TAM],info[100];	//char ejemplo con cadenas, es vectorial en el [] esta la capacidad;=string
    char *str;//'\0' puede significar el final de cadena
    string stri = "hello";//cadenas
    /*
	strlen() = catidad de letras del array
	strcat() = unir dos string
    strcpy() = copia un string a otro
    srtlwr() = convierte string a minusculas 
    strupr() = convierte string a mayusculas 
	strrev() = reverse string
    strcmp() = compare dos string
    */
    bool b = true;//true (1) y false(2);
    
    cout<<"\t\t Menu de repaso\n\t Repaso_0\n\t Repaso_1\n\t Repaso_2\n\t Repaso_3\n\t Repaso_4\n\t Repaso_5\n\t Repaso_6\n\t";//comando para un printf("muestra en pantalla");
	//cin>>n;   
    n='7';
    switch(n){//switch estructura condicional mayor mente utilizada para menus;	
    	case '9'://fall-through==cuando los casos se siguen ejecutando sin un break;
    	case '0'://se declaran las condiciones del switch poniendo el case y luego el numero o simbolo para rediriguirlo a ese en expecifico, En este caso es '1' por que es tipo char;	
		
		//------------------Entrada y Salida de datos----------------------------
		
			system("cls");//system("cls") comando para limpieza de la pantalla; 
			cout<<"int "<<sizeof(int)<<" bits"<<endl;//El sizeof retorna el espacio de memoria;
			cout<<"long int "<<sizeof(long int)<<" bits"<<endl;
			cout<<"short int "<<sizeof(short int)<<" bits"<<endl;
			cout<<"float "<<sizeof(float)<<" bits"<<endl;
			cout<<"double "<<sizeof(double)<<" bits"<<endl;
			cout<<"long double "<<sizeof(long double)<<" bits"<<endl;
			cout<<"char "<<sizeof(char)<<" bits"<<endl;
			cout<<"string "<<sizeof(string)<<" bits"<<endl;
			cout<<"bool "<<sizeof(bool)<<" bits"<<endl;
			cout<<"direccion puntero "<<sizeof(ptr)<<" bits"<<endl;
			cout<<"matriz "<<sizeof(matriz)/*total*//(sizeof(*matriz)/*espacio puntero(depende n° de varibles*//100/*en este caso 100*/)<<endl;
			//en cada direccion hay 100 variables int (4 bits)
			/*
			el sizeof no se puede usar en funciones
			porque al enviarlo solo se envia el puntero 
			donde inicia la direccion del array pero 
			no hasta donde llega el array;
			*/
			cin>>y;//forma de entrada de datos
			/* 
		    \t es para realizar un tabulario mejor conocido como un espacio mediano 
			\\para hacer la barra 
			\' para comillas simples 
			\"para comillas dobles
			*/
			cout<<"Simbolos= \t \\ \t \' \t \"\n";
			system ("pause");//comando para pausar el programa
	
		break;//aqui es donde se rompe el primer caso el break se usa para que no lea el siguiente caso al menos que utilice el simbolo adecuado para el segundo caso;
		
		case '1':
			
		//--------------------operaciones matematicas-------------------------------
			
			/*
			"+"
			"-"
			"*"
			"/"
			"%"
			"x=pow(y,x)"
			"x=sqrt(x)"
			*/
			system("cls");
			x=y=2;//forma eficiente de declarar variables con el mismo valor
			x +=y;// x=x + y;
		    cout<<"sum x : "<<x<<endl;
		    x= x - y;
		    cout<<"res x : "<<x<<endl;
		    cout<<"multi x : "<<x*y<<endl;//En los printf tambien se pueden hacer procesos matematicos simples;
		    x=(float)x / y;
		    cout<<"divi x : "<<x<<endl;
		    x= pow (y,x);//x^y
		    cout<<"elev x : "<<x<<endl;
		    x= sqrt (x);//raiz de x
		    cout<<"raiz x : "<<x<<endl;
		    x=x % x;//resto
		    cout<<"resto x : "<<x<<endl;
		    
		    x=rand()%10+1;
		    cout<<"rand x: "<<x<<endl;
			/*
			rand= sirve para guardar numeros al azar 
			se escribe el % y luego el numero maximo que se quiera dar 
			a continuacion se le suma + el numero minimo que se le quiera dar
		    */
		    
		    //operadores de incremento
			x=y++;//asigna un valor x y despues suma y
		    cout<<"incrementa x : "<<x<<endl;
		    x=--y;//decrementa y despues asigna un valor x
		    cout<<"decrementa x : "<<x<<endl;
		    system ("pause");
		    
    	break;
    	
    	case '2':
    		
    	//----------------------Estructura condicional--------------------------
			/*
			"=="igual ,
			"<"menor ,
			"<="menor igual ,
			">"mayor ,
			">="mayor igual,
			"!=" diferente,
			"&&" y,
			"||" o.
			*/
			y=1;    
		    do {//bucle tipo do while este bucle en particular tiene una condicion que al menos una vez entra en el bucle;
		    	system("cls");
		        cout<<"introdusca un numero entre 1 y 10 y este entre 98 o 99: ";
		        cin>>x;
		        
		        if (x>=1 && x<=10) {//condicion if funciona para que solo pueda entrar a esa parte del programa si cumple con lo escrito entre parentecis();
		            cout<<"\nel numero "<<x<<" esta entre 1 y 10\n";
		        } else {//el else se usa junto con el if se da a entender el la condicion del else es todo lo contrario a la del if que este detras de ella;
		            cout<<"\nel numero NO esta entre 1 y 10\n";
		        }
		        if (!(x==98 || x==99)) {
		            cout<<"\nel numero NO es 98 o 99\n";
		        } else {
		            cout<<"\nel numero "<<x<<" es 98 o 99\n";
		        }
		        int s=(x==y)? 1 : 0;//(condicion)? retorno si es verdadero : retorno si es falso; 
			    cout<<s;
			    if(x)// si pones una varible sola y el numero es diferente de zero se considera verdadero 
			    	cout<<"es valido";
			    	
		        cout<<"\nquiere introducir otro numero? .\n\n";
		        fflush(stdin);
		        n=tolower(getchar());//tolower= el simbolo escanea se lee siempre como minuscula; 
		    } while(n!='.');//sierre  del bucle do while con una condicion char en esta caso;
		    
		break;
		
		case '3':
		
		//-----------------------Bucles-----------------------------------
		
			system("cls");
			//for(initvalue;condition;increment){ se pueden iniciar la cantidad de variables que quieras y igual con los incrementos
			for(int i = 0,x=123456789; x!=0; i++ ) {//se puede declarar varibles en el bucle y solo existe misentras que se ejecuta
				/*
				entena= num1/100%10;
        		decena= num1/10%10;
        		unidad= num1%10;
        		*/
				vector[i]=x%10;//un vector es como tener una lista de varibles
				x/=10;
	            cout<<"bucle for: "<<vector[i]<<endl;
	        }
			x=5;
    		while (x>0){
				x --;
				if(x==3)
					continue;//el resto des bucle se omite y reicia manteniendo los datos
					
				cout<<"bucle while: "<<x<<endl;
			}
		break;
	/**/	
		case '4':
		
		//--------------------------Funciones-------------------------------
		
			do {
				system("cls");
				cout<<"Ingrese 2 datos x y:"<<endl;
				cin>>vector[0];
				cin>>vector[1];
				cout<<"factorial de "<<vector[0]<<" es "<<factorial(vector[0])<<endl;
				burbuja(&vector[0],&vector[1]);
				cout<<"burbuja x="<<vector[0]<<" y="<<vector[1]<<endl;
				cout<<"\nsalir con .\n\n";
		        fflush(stdin);
		        n=tolower(getchar());
			} while(n!='.');
		break;
		
		case '5' :
		
		//-----------------------Uso de memoria------------------------------
		
			do{
				system("cls");
				/*
				Puntero 
				tipo_puntero *identificador; 
				*/
				a=10;
				p=&a;//asignacion 
				
				cout<<"direccion: x = "<<&a<<", puntero = "<<p<<endl;
				cout<<"valor: x = "<<a<<", puntero = "<<*p<<endl;
				ptr = new int [TAM];
				ptr=vector;
				for(int i=0;i<TAM-10;i++){
					vector[i]=i;
					cout<<"la direccion: v[] = "<<&vector[i]<<" puntero = "<<(ptr+i)<<endl;
				}
				cout<<endl;
				p=muestra(vector,x,&p);//envio y retor en forma de puntero
			
				for(int i=0;i<TAM-10;i++){
					cout<<"\nla valor: v[] = "<<vector[i]<<" puntero = "<<*(p+i);
				}
				fflush(stdin);
				n=tolower(getchar());
			}while(n!='.');	
			
			delete [] p;
			delete p;//liberacion de memoria;
			/*
			despues de liberar memoria se vuelven 
			punteros colgados y pueden ser reusados
			solo debes asignale tamaño de nuevo (new);
			*/
		break;
		
		case '6':
			
		//---------------------areglos multidimensionales----------------
		
			system("cls");
			a=0;
			for(int k=0;k<3;k++){//asi se muestra un arreglo de 3 dimensiones o tres matricez lo mismo
				for(int i=0;i<10;i++){
					for (int j=0;j<10;j++){
						matriz[k][i][j]=a++;
						cout<<"\t"<<matriz[k][i][j];
					}
					cout<<endl;
				}
				cout<<endl;
			}
			
		break;
		
		case '7':
			
		//------------------------------clases------------------------------
		
		do{
			system("cls");
			Usuario a;
			Usuario obj("pedro",2,4),res("maria",4,6);
			cout<<a.getnombre();
			//res=res+obj; 
			//cout<<res.getcolor();
			Personaje <int> loa(0,0); //= new Personaje(0,0);
			//loa.ave();
			const Movimiento *cont = new Movimiento();
			
			cout<<"\nsalir con .\n\n";
		    fflush(stdin);
		    n=tolower(getchar());
		} while(n!='.');
		
		break;
		
		default://cuando no entra en ningun caso entra en el default;
		
		//----------------------------Ejemplos-------------------------------
		
			do{
                system("cls");
				cout<<"Saber si un numero es par o impar \nNumero:";
				cin>>x;				
                if(x%2==0){
                    cout<<"El numero es par"<<endl;
				}else{
                    cout<<"El numero es impar"<<endl;
				}
				cout<<"punto para ir al otro ejmeplo";
				fflush(stdin);
                n=tolower(getchar());
                system("pause");
            }while(n!='.');
            
			do{
                system("cls");	
				cout<<"Calcular el numero mayor y menor de tres numeros \n"<<endl;
                for(int i=0;i<3;i++){
                    cout<<"Numero "<<i+1<<": ";
                    cin>>vector[i];//escaneo de un vector tipo entero;
				}
                for(int i=1;i<3;i++){//metodo se ayuda para ordenar varibles printf("mirar con detenimiento como estan ordenados los for");
                    for(int j=0;j<3;j++){
                        if(vector[j]<vector[i]){
                        	//burbuja(&vector[j],&vector[i]);
						}
                    }
				}
                cout<<"El numero mayor es "<<vector[0]<<endl;
				cout<<"El numero menor es "<<vector[2]<<endl;
				cout<<"punto para ir al otro ejmeplo";
				fflush(stdin);
                n=tolower(getchar());
            }while(n!='.');
            
		break;
	}
    return (EXIT_SUCCESS);
}

//return_type funtion_name(parameters list);

int factorial(int num){//x=num;
	if(num==1)//caso base 
		return(1);
	else
		return(num*factorial(num-1));
	/*
	logica del proceso
	
	1=1->1*1=1;
	2=2->2*1=2,2*1=1;
	3=6->3*2=6,6*1=6;
	4=24->4*3=12,12*2=24,24*1=24;
	
	otro ejemplo 
	
    for(int i=1,fin=1; i<=x; i++) {
        fin*=i;
    }
    cout<<"resultado <<fin<<endl;
    */
}


int * muestra(int *v,int x,int **p){
	static int total[5];//permanecen apesar de que la funcion termine ejemplo: en la segunda vuelta sigue manteniendo los datos de la primera
	cout<<"direccion: x = "<<&x<<" puntero = "<<*p<<endl;
	cout<<"valor: x = "<<x<<", puntero = "<<**p<<endl;
	for(int i=0,event=0;i<TAM-10;i++){
		total[i] += event+=2;
		cout<<"la direccion en la funcion es v[] = "<<&v[i]<<endl;
	}
	return (total);//devolver el vector con nuevos valores
}

/*
En Java

Runtime app = runtime.getRuntime();
try{

app.exec("");
}
	catch (Exception e){

	}
//buscar MySQL	
*/

/*
En C++

void _fastcall TForm1::Button1Click(TObject *sender){
	shellExecute(NULL,"open","*.exe","http://miperfil.mx/lachayrainstaller",NULL//path,SW_SHOWNORMAL);
}

void _fastcall TForm1::Button2click(TObject *sender){

	SHELLEXECUTEINFO lpExecInfo;
	memset(&lpExecInfo, 0,sezeof(SHELLEXECUTEINFO));
	lpExecInfo.cbSize = sezeof (SHELLEXECUTEINFO);
	lpExecInfo.lpFile = "C:\\Windows\\System32\\cms.exe";
	lpExecInfo.lpParameters = "";
	lpExecInfo.lpDirectory = ""; //Si en el archivo se especifica la ruta, debe ser null el directorio este
	lpExecInfo.lpVerb = "open";
	lpExecInfo.nShow = SW_NORMAL;
	lpExecInfo.fMask = 0;
	shellExecuteEx(&lpExecInfo);
}*/
