#ifndef JIN_H //si no esta definido: esto previene que un archivo 
#define JIN_H//de encabezado sea incluido mas de una vez dentro de un archivo 

#ifndef USUARIO_H
#define USUARIO_H



class Usuario{
	private:
		char nombre[50];
		int color; 
		int personaje;
	public:
		Usuario();
		Usuario(char nombre[],int color,int personaje);
		~Usuario();
		
		Usuario operator+(Usuario &obj){
			Usuario res;
			res.setcolor(this->color+obj.getcolor());
			return res;
		}
		void cargarDatos();
		void mostrarDatos();
		void setnombre( char nombre[]);
		char * getnombre();
		void setcolor(int color);
		int getcolor();
		void setpersonaje(int personaje);
		int getpersonaje();
};
#endif

//const int COL=8;
const int COLPE=18;
	int control(int restar());//controles
	void gotoxy(int x, int y);//ubica las cosas en la pantalla
/*	void imprimir(Tablero matriz[][COL],int X,int Y,int FIL,int COL);//cambiar Tablero por la clase*/
	void cronometro();//un cronometro
//	void movimiento1(int matriz[][COL],int *X,int *Y);//movimiento de teclado izquierdo enviar la direccion en pantalla &X,&Y
//	void movimiento2(int matriz[][COL],int *X,int *Y);//movimiento de teclado derecho enviar la direccion en pantalla &X,&Y
	void tono(int color);//pinta un mensaje
	void ordenarcolores(int color);//muestra el numero de color que estes usando
	int cuenta(int x);//cuenta los digitos 
	
	template <typename T,typename U>
	void burbuja(T x, U y){// funcion: a es igual &x por lo tanto *a es igual x.
		static float aux; //permanecen apesar de que la funcion termine ejemplo: en la segunda vuelta sigue manteniendo los datos de la primera
		aux=0;
		aux=*x;
		*x=*y;
		*y=aux;

	}
	
//	int factorial(int x);//calcula la factorial de un numero
	void primo(int x);//calcula un numero primo
	void ordenar(int x[]);//ordena los numero de mayor a menos o alreves para enviar el vector es ordenar(x);
	
#endif
