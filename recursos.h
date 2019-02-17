#ifndef RECURSOS_H_INCLUDED
#define RECURSOS_H_INCLUDED
#include<allegro.h>

    BITMAP *buffer;//pantalla
    BITMAP *pared;//paredes
    BITMAP *ale;
    BITMAP *ale2;
    BITMAP *ale3;
    BITMAP *ale4;
    BITMAP *ale5;
    BITMAP *ale6;
    BITMAP *ale7;
    BITMAP *ale8;
    BITMAP *ale_buffer;//crea n buffer que muestra solo una parte del char
    BITMAP *salida;
    BITMAP *entrada;
    BITMAP *fondo;
    BITMAP *cpu1;
    MIDI *musica;

    //importar imagenes y musica
void c_recursos(){
    musica = load_midi("musi.mid");
    buffer = create_bitmap(600, 600);
    pared = load_bitmap("roca.bmp", NULL);
    ale = load_bitmap("derecha1.bmp", NULL);
    ale2 = load_bitmap("derecha2.bmp", NULL);
    ale3 = load_bitmap("izquierda1.bmp", NULL);
    ale4 = load_bitmap("izquierda2.bmp", NULL);
    ale5 = load_bitmap("arriba1.bmp", NULL);
    ale6 = load_bitmap("arriba2.bmp", NULL);
    ale7 = load_bitmap("abajo1.bmp", NULL);
    ale8 = load_bitmap("abajo2.bmp", NULL);
    cpu1 = load_bitmap("cpu.bmp", NULL);
    salida = load_bitmap("transporte.bmp", NULL);
    entrada = load_bitmap("llave.bmp", NULL);
    fondo = load_bitmap("fondo.bmp", NULL);
    ale_buffer = create_bitmap(20,20);

}


#endif // RECURSOS_H_INCLUDED
