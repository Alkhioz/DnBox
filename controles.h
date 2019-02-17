#ifndef CONTROLES_H_INCLUDED
#define CONTROLES_H_INCLUDED
#include<allegro.h>

int mod=1;//variable para controlar las animaciones
int game=0;//controla el loop del juego

void controles(){
 if(key[KEY_RIGHT]){
        dir=0;
        colision1();

        }
        else if(key[KEY_LEFT]){
        dir=1;
        colision2();
        }
        else if(key[KEY_UP]){
        dir=2;
        colision3();
        }
        else if(key[KEY_DOWN]){
        dir=3;
        colision4();

        }
        else dir=4;
}

void movimiento(){
    if(dir==0){
        dirx +=20;
        mod=1;
        clear(buffer);
        Imprimir();
        dibujar_personaje2();
        pantalla();
        rest(70);
    }
    if(dir==1){
        dirx -=20;
        mod=2;
        clear(buffer);
        Imprimir();
        dibujar_personaje4();
        pantalla();
        rest(70);
    }
    if(dir==2){
        diry-=20;
        mod=3;
        clear(buffer);
        Imprimir();
        dibujar_personaje6();
        pantalla();
        rest(70);
    }
    if(dir==3){
        diry+=20;
        mod=4;
        clear(buffer);
        Imprimir();
        dibujar_personaje8();
        pantalla();
        rest(70);
    }


}

void anima(){
    if(mod==3){
        clear(buffer);
        Imprimir();
        dibujar_personaje5();
        pantalla();
        rest(70);

        clear(ale_buffer);
        blit(ale5, ale_buffer , 0,0,0,0,20,20);
        draw_sprite(buffer, ale_buffer,dirx,diry);
        pantalla();
        rest(70);
    }
    if(mod==4){
        clear(buffer);
        Imprimir();
        dibujar_personaje7();
        pantalla();
        rest(70);

        clear(ale_buffer);
        blit(ale7, ale_buffer , 0,0,0,0,20,20);
        draw_sprite(buffer, ale_buffer,dirx,diry);
        pantalla();
        rest(70);
    }
    if(mod==2){
        clear(buffer);
        Imprimir();
        dibujar_personaje3();
        pantalla();
        rest(70);

        clear(ale_buffer);
        blit(ale3, ale_buffer , 0,0,0,0,20,20);
        draw_sprite(buffer, ale_buffer,dirx,diry);
        pantalla();
        rest(70);
    }
    if(mod==1){
        clear(buffer);
        Imprimir();
        dibujar_personaje();
        pantalla();
        rest(70);

        clear(ale_buffer);
        blit(ale, ale_buffer , 0,0,0,0,20,20);
        draw_sprite(buffer, ale_buffer,dirx,diry);
        pantalla();
        rest(70);
        }

    if(lab[dirx/20][diry/20] =='3') {
        clear (buffer);
        game++;

    }
}


#endif // CONTROLES_H_INCLUDED
