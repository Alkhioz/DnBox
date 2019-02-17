#include <allegro.h>//inicio bibliotecas
#include "recursos.h"
#include "camino.h"
#include "personaje.h"
#include "controles.h"
#include "menu.h"

int n=0;
int punateje=1;

void main()//funcion main principal
{
    srand(unsigned(time(NULL)));//semilla

    allegro_init();//inicia allegro
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 600, 600, 0, 0);
    if(install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0){
        allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
        }//inicio de musica
    set_volume(210, 210); //controlar volumen

    menu_al();
    c_recursos();
    play_midi(musica,1/*el uno es para que se repita*/);
    Inicializar();
    int x=1+rand()%FIL-2;
    GenerarCamino(x, 1);
    lab[x][1]='4';
    dirx=x*20;
    diry=20;
    GenerarParedes();
    FinGenerar();
    Imprimir();
    pantalla();
    while(game != 1){

        if(key[KEY_ESC]){
        clear (buffer);
        game=1;
        }
        if(men1 !=1){
            controles();
            movimiento();
            anima();
        }else if(men1 == 1){
                Imprimir();
                imp_cpu();
                pantalla();
                clear (buffer);

        }


    }

}
END_OF_MAIN();
