#ifndef CAMINO_H_INCLUDED
#define CAMINO_H_INCLUDED
#include<allegro.h>
#define FIL 30//constantes
#define COL 30//

char lab[FIL][COL];

struct recorrido{
       int x;
       int y;
       struct recorrido *sgt;
       };
typedef struct recorrido *Lista;
Lista reco=NULL;

void pantalla(){
    blit(buffer, screen , 0,0,0,0,600,600);
}
void Inicializar()
{
     for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(i==0 || j==0 || i==FIL-1 || j==COL-1) lab[i][j]='0';
                     else lab[i][j]=' ';
                     }
             }
     }
void Imprimir()
{
    for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(lab[i][j])draw_sprite(buffer, fondo , i*20 , j*20);

                     }

             }
     for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(lab[i][j]=='0')draw_sprite(buffer, pared , i*20 , j*20);

                     }

             }
      for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(lab[i][j]=='3')draw_sprite(buffer, salida , i*20 , j*20);

                     }

             }
      for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(lab[i][j]=='4')draw_sprite(buffer, entrada , i*20 , j*20);

                     }

             }
}

void GenerarCamino(int i, int j)
{
     while(j!=COL-2)
     {
             int a=rand()%3;
             switch(a)
             {
                      case 0:
                           if(i+1!=FIL-1 && lab[i+1][j]!='5')
                           {
                                      i++;
                                      lab[i][j]='5';
                                      }
                           break;
                      case 1:
                           if(i-1!=0 && lab[i-1][j]!='5')
                           {
                                     i--;
                                     lab[i][j]='5';
                                      }
                           break;
                      case 2:
                           if(j+1!=COL-1 && lab[i][j+1]!='5')
                           {
                                      j++;
                                      lab[i][j]='5';
                                      if(j==COL-2) lab[i][j]='3';
                                      }
                           break;


                      }
                 }//fin while
     }
void GenerarParedes()
{
     int paredes=0;
     while(paredes<100)
     {
                      int x=rand()%FIL;
                      int y=rand()%COL;

                      if(lab[x][y]==' ')
                      {
                                      paredes++;
                                      int lim=1+rand()%10;
                                      int puestas=0;
                                      switch(rand()%4)
                                      {
                                                       case 0:

                                                            while(lab[x][y]==' ')//para arriba
                                                            {
                                                                               if(puestas==lim)break;
                                                                               puestas++;
                                                                               lab[x][y]='0';
                                                                               x--;
                                                                               }
                                                            break;
                                                       case 1:
                                                            while(lab[x][y]==' ')//para abajo
                                                            {
                                                                               if(puestas==lim)break;
                                                                               puestas++;
                                                                               lab[x][y]='0';
                                                                               x++;
                                                                               }
                                                            break;
                                                       case 2:
                                                            while(lab[x][y]==' ')//para atras
                                                            {
                                                                               if(puestas==lim)break;
                                                                               puestas++;
                                                                               lab[x][y]='0';
                                                                               y--;
                                                                               }
                                                            break;
                                                       case 3:
                                                            while(lab[x][y]==' ')//para adelante
                                                            {
                                                                               if(puestas==lim)break;
                                                                               puestas++;
                                                                               lab[x][y]='0';
                                                                               y++;
                                                                               }
                                                            break;
                                                            }
                                                       }
                                      }
     }

void FinGenerar()
{
     for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL-1; j++)
             {
                     if(lab[i][j]=='5') lab[i][j]='9';
                     if(j==COL-2 && lab[i][j]!='3') lab[i][j]='0';
                     if(lab[i][j]=='3')
                     {
                                       lab[i][j+1]='3';
                                       lab[i][j]='9';
                                       }
                     }
             }
}
void imp_cpu(){
for(int i=0; i<FIL; i++)
     {
             for(int j=0; j<COL; j++)
             {
                     if(lab[i][j]=='9')draw_sprite(buffer, cpu1 , i*20 , j*20);

                     }

             }
}
#endif // CAMINO_H_INCLUDED
