#include <stdio.h>

#define MAXFILAS 10
#define MAXCOLUMNAS 10

void inicializar_tablero (int filas, int cols, char tablero[][MAXCOLUMNAS]);
void colocar_barquito (int filas, int cols, int longitud, int tipo, char tablero[][MAXCOLUMNAS]);
void imprimir_tablero (int filas, int cols, char tablero[][MAXCOLUMNAS]);

int main (void)
{
char tablero [MAXFILAS][MAXCOLUMNAS];
inicializar_tablero (MAXFILAS,MAXCOLUMNAS,tablero);

colocar_barquito (4,3,4,'V',tablero);
colocar_barquito (0,0,1,'H',tablero);
colocar_barquito (6,5,3,'H',tablero);

imprimir_tablero(MAXFILAS,MAXCOLUMNAS,tablero);
}

void inicializar_tablero (int filas, int cols, char tablero[][MAXCOLUMNAS])
{
  for(int filas=0;filas<10;filas++)
  {
    for(int cols=0;cols<10;cols++)
    {
      tablero[filas][cols] = '0';
    }
  }
}
void colocar_barquito (int fila,int cols,int longitud, int tipo,char tablero [][MAXCOLUMNAS])
{
    int temp = 0;
    if(tipo == 'H')
    {
        while(temp != longitud){

        tablero[fila][cols] = '*';
        cols++;
        temp++;
        }
    }

   else if(tipo == 'V')
    {
        while(temp != longitud){
        tablero[fila][cols] = '*';
        fila++;
        temp++;
        }
    }
}

void imprimir_tablero(int filas, int cols, char tablero [][MAXCOLUMNAS])
{
int enter;
    filas = 0;
    while(filas<MAXFILAS)
    {
        cols = 0;
        while (cols < MAXCOLUMNAS)
        {
            printf("%c", tablero[filas][cols]);
            cols++;
        }
        filas++;
        if(enter >= 10){
            printf("\n");
        }
        enter++;
    }
}






