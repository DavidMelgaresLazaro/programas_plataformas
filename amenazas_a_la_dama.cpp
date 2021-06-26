#include <stdio.h>

#define FILAS 8
#define COLUMNAS 8
#define ESPACIO_SIN_UTILIZAR '.'



void iniciarTablero(char tablero[FILAS][COLUMNAS]);
void Encabezado();
void movimiento_dama (int marcarPieza);
void imprimirTablero(char tablero[FILAS][COLUMNAS]);
void movimiento_dama(int fila, int columna,char tablero[FILAS][COLUMNAS]);




int main(void)
{
    int fila;
    int columna;
    printf("Posiciona la dama en la FILA:\n");
    scanf("%d",&fila);
    printf("Posiciona la dama en la COLUMNA:\n");
    scanf("%d",&columna);

    char tablero[FILAS][COLUMNAS];
    iniciarTablero(tablero);
    Encabezado();
    movimiento_dama(fila, columna, tablero);
    imprimirTablero(tablero);


}

void iniciarTablero(char tablero[FILAS][COLUMNAS])
{
  int f;
  int c;
 for(int f=0;f<FILAS;f++)
  {
    for(int c=0;c<COLUMNAS;c++)
    {
      tablero[f][c] = '.';
    }
  }
}
void Encabezado() {
  int m;
  for (m = 0; m <= COLUMNAS; m++) {
    printf("----");
    if (m == COLUMNAS) {
      printf("-");
    }
  }
  printf("\n");
}

void movimiento_dama(int fila, int columna,char tablero[FILAS][COLUMNAS])
{
    int tempf;
    int tempc;
    int f;
    int c;
    int ff;
    int cf;

    tablero[fila][columna] = '#';
    tempf = fila;
    tempc = columna;
    f = fila;
    c = columna;
    ff = fila;
    cf = columna;



    while (fila < 8)
    {
        tablero[fila][columna] = '1';
        fila++;

    }
    while (fila > 0)
    {
        tablero[fila][columna] = '1';
        fila--;

    }

    while (columna < 8)
    {
        tablero[tempf][columna] = '1';
        columna++;

    }
    while (columna > 0)
    {
        tablero[tempf][columna] = '1';
        columna--;

    }

    while (tempf < 8)
    {
        tablero[tempf][tempc] = '1';
        tempc++;
        tempf++;
    }
    while (tempf > 0)
    {
        tablero[tempf][tempc] = '1';
        tempc--;
        tempf--;
    }
    while (c < 8)
    {
        tablero[f][c] = '1';
        c++;
        f--;
    }
    while (c > 0)
    {
        tablero[f][c] = '1';
        c--;
        f++;
    }

tablero[ff][cf] = '#';

}


void imprimirTablero(char tablero[FILAS][COLUMNAS])
{
  int f;
  int c;

  for(f = 0; f < FILAS; f++)
  {
    for(c = 0; c < COLUMNAS; c++)
    {
      printf("%c ", tablero[f][c]);
    }
    printf("\n");
  }
}
