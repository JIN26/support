#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H

class Movimiento {
	private:
		//-----------controles del jugador 1----------------
		static const int DERECHA=100,IZQUIERDA=97,ARRIBA=119,ABAJO=115;
		//------------controles del jugador 2----------------
		static const int RIGHT=77,LEFT=75,UP=72,DOWN=80;
		//---------------------------------------------------
		char tecla;
		int ***matriz;
	public:
		Movimiento();
		~Movimiento();
		void autoMovimiento(int *a,int *b) const;//movimiento estatico enviar la direccion en pantalla &X,&Y
		void arriba(int *a,int *b) const;
		void abajo(int *a,int *b) const;
};

#endif

