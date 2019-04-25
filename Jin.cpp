#include "Jin.h"
#include <iostream>//libreria basica
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>


using namespace std;//espacio de nombre(namespace) std(estandar)

//////////////////Inicio de la clase usuario//////////////////////////////////////////////

Usuario::Usuario(){
	strcpy(nombre," ");
	color=0;
	personaje=rand()%9+0;
}

Usuario::Usuario(char nombre[],int color,int personaje){
	strcpy((*this).nombre,nombre);
	this->color=color;
	this->personaje=personaje;
}

Usuario::~Usuario(){
	cout<<"Usuario destrido"<<endl;//muestra en pantalla
}


void Usuario::cargarDatos(){
	cin.sync();
	cout<<"Nombre: ";
	cin.getline(nombre,49);
	cout<<"los colores van de 0 a 15"<<endl;
	cout<<"color: ";
	cin>>color;
	cout<<"Personaje: ";
	cin>>personaje;
}

void Usuario::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Color: ";
	ordenarcolores(color);
	cout<<"Personaje: "<<personaje<<endl;
}

void Usuario::setnombre(char nombre[]){
	strcpy(this->nombre,nombre);
}

char* Usuario::getnombre(){
	return nombre;
} 

void Usuario::setcolor(int color){
	this->color=color;
}

int Usuario::getcolor(){
	return color;
}

void Usuario::setpersonaje(int personaje){
	this->personaje=personaje;
}

int Usuario::getpersonaje(){
	return personaje;
}

///////////////Final de la clase usuario///////////////////////////////////////////////////////////////

const int TIME=1000;
//---------------------------------------------------

/*void imprimir(Tablero matriz[][COL],int X,int Y,int FIL,int COL){
    int x=X,y=0;    
    
    cout<<("\n");
    //encuadre(I.carton);
    for(int i=0;i<FIL;i++){
        y=Y;
        for(int j=0;j<COL;j++){
            gotoxy(x,y);
            matriz[i][j].mostrarCuadro(i,j,x,y);//depende del mostrarDatos de la clase 
            y+=6;
        }
    x+=3;
    }
    //control();
}*/




void escribir(){
	
	ofstream ave;
	string  nombre;
	ave.open("ave.txt",ios::out);//abriendo el archivo
//	ave.open(nombre.c_str(),ios::out);//abriendo el archivo
	if (ave.fail()){
		cout<<"error";
		exit(0);
	}
	else{
		cout<<"nombre: ";
		getline(cin,nombre);
		ave<<nombre;
		ave.close();//cerrar archivos 
	}
}

void lectura(){
	ifstream ave;
	ave.open("ave.txt");
}

void gotoxy(int y,int x){

    HANDLE Cons;
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    Cons = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(Cons,Pos);
}

int control(int restar()){
	cout<<"\n\n\t\t";
	if(GetAsyncKeyState(VK_SHIFT)){
        restar();
    }
	if(GetAsyncKeyState(VK_ESCAPE)){
		return 1;
    }
    if(GetAsyncKeyState(VK_SPACE)){
		cin.get();
    }
    if(GetAsyncKeyState(VK_TAB)){
	    exit(0);
    }
    system("cls");
}

void cronometro(){
	
	int i=1000;
	
	for(int x=0; x<24; x++) {
		for(int y=0; y<=59; y++) {
			for(int z=0; z<=59; z++) {
				cout<<"Game over %02d:%02d:%02d\r",x,y,z;
				Sleep(i);
			}
		}
	}
	exit(0);
}

void tono(int color){
	
	int p=color;
	int tono[255] = {
		0x00128, //0  Negro             
    	0x001, //1  Azul              
    	0x002, //2  Verde             
    	0x003, //3  Aguamarina        
      	0x004, //4  Rojo              
     	0x005, //5  Purpura           
    	0x006, //6  Amarillo          
		0x007, //7  Blanco            
		0x008, //8  Gris              
		0x009, //9  Azul Claro        
    	0x00A, //10 Verde Claro       
    	0x00B, //11 Aguamarina Claro  
    	0x00C, //12 Rojo Claro        
    	0x00D, //13 Purpura Claro     
		0x00E, //14 Amarillo Claro    
    	0x00F, //15 Blanco Brillante  
   	};
	for(int i=0;i<255;i++){
		tono[i]=i;	
	}
   	SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),tono[p]); 
}

void ordenarcolores(int color){
	
	switch (color){
		case 0:
			cout<<"Negro"<<endl;
		break;
		case 1:
			cout<<"Azul"<<endl;
		break;
		case 2:
			cout<<"Verde"<<endl;
		break;
		case 3:
			cout<<"Aguamarina"<<endl;
		break;
		case 4:
			cout<<"Rojo"<<endl;
		break;
		case 5:
			cout<<"Purpura"<<endl;
		break;
		case 6:
			cout<<"Amarillo"<<endl;
		break;
		case 7:
			cout<<"Blanco"<<endl;
		break;
		case 8:
			cout<<"Gris"<<endl;
		break;
		case 9:
			cout<<"Azul claro"<<endl;
		break;
		case 10:
			cout<<"Verde claro"<<endl;
		break;
		case 11:
			cout<<"Aguamarina claro"<<endl;
		break;
		case 12:
			cout<<"Rojo claro"<<endl;
		break;
		case 13:
			cout<<"Purpura claro"<<endl;
		break;
		case 14:
      		cout<<"Amarillo claro"<<endl;
		break; 
		case 15:
			cout<<"Blanco claro"<<endl;     
		break;
	};
}

int cuenta(int x) {
	int i=0; 
	
	for(int v[100];x!=0; i++) {
		v[i]=x%10;
		x/=10;
	}
	i--;
	return i;
}

/*int factorial(int x) {
	int j=1;
	for(int i=1; i<=x; i++) {
		j*=i;
	}
	return j;
}*/

void primo(int x) { 

	for(int i=2; i<x; i++) {
		if(x%i==0) {
			cout<<"El numero "<<x<<" es primo"<<endl;
		}
	}
}

void ordenar(int x[]){
	
	for(int i=0,aux=0; i<10; i++) {
		for(int j=i; j<10; j++) {
			if(x[i]<x[j]) {//para cambiar de menor a mayor solo cambia el signo a >
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;
			}
		}
	}
}
