#include "Movimiento.h"

#include "Jin.h"
#include <iostream>
#include <conio.h>
using namespace std;

Movimiento::Movimiento (){
	this->tecla=0;
	this->matriz 
}

void Movimiento::autoMovimiento(int *a,int *b) const{
	char tecla=0;
	if(kbhit()){
		cin.sync();
		tecla=getch();
	}
	switch(tecla){
		default:
			if(*b<72){	
				*b+=6;
			}
			else{
				*a='0';
			}
		break;
	}	
}

void Movimiento::arriba(int *X,int *Y) const{
//----------ARRIBA jugador 1---------------------------------------------------------------------------------			
	if(tecla==ARRIBA){
		if(matriz[*X-1][*Y] == 32){					
			matriz[*X][*Y] = 32;
			//cf=*X;
			*X-=1;
			//cc=*Y;
			//direccion=2;
			//if(direccion == 2){//arriba
			//matriz[cf+x][cc]=matriz[cf][cc];
		}
	/*	else{
			if(direccion == 3 && matriz[*X-1][*Y] == 111 && matriz[*X+1][*Y] == 32){
				cf=*X;
				*X+=1;
				cc=*Y;
			}
			else{
				if(matriz[sf-1][sc] == 42){
					*X-=1;
					rf=0;
					puntos++;
				}
				else{
					cronometro();
				}
			}			
		}*/
	}
}

void Movimiento::abajo(int *X,int *Y) const{
//---------ABAJO jugador 1-----------------------------------------------------------------------------------------------
 	if(tecla==ABAJO){
 		if(matriz[*X+1][*Y] == 32){
	 		matriz[*X][*Y] = 32;
	 		cf=*X;
			*X+=1;
			cc=*Y;
			direccion=3;
		}
	/*	else{
			if(direccion == 2 && matriz[*X+1][*Y] == 111 && matriz[*X-1][*Y] == 32){
				cf=*X;
				*X-=1;
				cc=*Y;
			}
			else{
				if(matriz[*X+1][*Y] == 42){
					*x+=1;
					rf=0;
					puntos++;
				}
				else{
					cronometro();
				}
			}		
		}*/
	}
}

//void movimiento1(int matriz[][COL],int *X,int *Y){
/*//*----------controles----------------------------------------------------------------------------------------
	char tecla=0;
	if(kbhit()){//movimiento de jugador 1
			cin.sync();
			tecla=getch();
		if(tecla==ARRIBA||tecla==ABAJO||tecla==IZQUIERDA||tecla==DERECHA){

			

//----------IZQUIERDA	 jugador 1-----------------------------------------------------------------------------------------		
			if(tecla==IZQUIERDA){
				if(matriz[*X][*Y-1] == 32){
	 					matriz[*X][*Y] = 32;
	 					cc=*Y;
						*Y-=1;
						cf=*X;
						direccion=1;
				}
				else{
					if(direccion==0 && matriz[*X][*Y-1] == 111 && matriz[*X][*Y+1] == 32){
						cc=*Y;
						*Y++;
						cf=*X;
					}
					else{
						if(matriz[*X][*Y-1] == 42){
							*Y--;
							rf=0;
							puntos++;
						}
						else{
							cronometro();
						}
					}
				}
			}
//----------DERECHA jugador 1-----------------------------------------------------------------------------------------------
 			if(tecla==DERECHA){
 				if(matriz[*X][*Y+1] == 32){
	 					matriz[*X][*Y] = 32;
	 					cc=*Y;
						*Y++;
						cf=*X;
						direccion=0;
						//if(direccion == 0 ){//derecha
						pmatriz[cf][cc-x]=matriz[cf][cc];						
				}
				else{
					if(direccion==1 && matriz[*X][*Y+1] == 111 && matriz[*X][*Y-1] == 32){
						cc=*Y;
						*Y--;
						cf=*X;
					}
					else{
						if(matriz[*X][*Y+1] == 42){
							*Y++;
							rf=0;
							puntos++;
						}
						else{
							cronometro();
						}
					}
				}
			}
		}
	}*/
//}

/*void movimiento2(int matriz[][COL],int *X,int *Y){//ubicacion del muñeco 2
	char tecla=0;
	cin.sync();
//----------arriba jugador 2--------------------------------------------------------------------------------------------
	if(GetAsyncKeyState(VK_UP) ||	tecla==UP ){
		tecla=UP;
		if(matriz[*X-1][*Y] == 32){
			matriz[*X][*Y] = 32;
			*X-=1;
		}
		else{
			cronometro();
		}
	}
//----------abajo jugador 2---------------------------------------------------------------------------------------------			
	if(GetAsyncKeyState(VK_DOWN) || tecla==DOWN ){
		tecla=DOWN;
 		if(matriz[*X+1][*Y] == 32){
	 		matriz[*X][*Y] = 32;
			*X+=1;
		}
		else{
			cronometro();
		}
	}
//----------izquierda jugador 2--------------------------------------------------------------------------------------------
	if(GetAsyncKeyState(VK_LEFT) || tecla==LEFT ){
		tecla=LEFT;
		if(matriz[*X][*Y-1] == 32){
	 		matriz[*X][*Y] = 32;
			*Y-=1;
		}
		else{
			cronometro();
		}
	}
//----------derecha jugador 2--------------------------------------------------------------------------------------------
	if(GetAsyncKeyState(VK_RIGHT) || tecla==RIGHT ){
		tecla=RIGHT;
 		if(matriz[*X][*Y+1] == 32){
	 		matriz[*X][*Y] = 32;
			*Y+=1;
		}
		else{
			cronometro();
		}
	}
}*/


