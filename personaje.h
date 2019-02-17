#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED
#include<allegro.h>

int dirx, diry;//coordenadas de direccion
int dir;//variable usada para controlar que el personaje se mueva


void dibujar_personaje(){//aqui estan los sprites del char
    blit(ale, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje2(){//aqui estan los sprites del char
    blit(ale2, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje3(){//aqui estan los sprites del char
    blit(ale3, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje4(){//aqui estan los sprites del char
    blit(ale4, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje5(){//aqui estan los sprites del char
    blit(ale5, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje6(){//aqui estan los sprites del char
    blit(ale6, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje7(){//aqui estan los sprites del char
    blit(ale7, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void dibujar_personaje8(){//aqui estan los sprites del char
    blit(ale8, ale_buffer , 0,0,0,0,20,20);
    draw_sprite(buffer, ale_buffer,dirx,diry);

}
void colision1(){//derecha
if(lab[(dirx+20)/20][diry/20] =='0')
        {dir=4;
        }
}
void colision2(){//izquierda
if(lab[(dirx-20)/20][diry/20] =='0')
        {dir=4;
        }
 }
 void colision3(){//arriba
if(lab[dirx/20][(diry-20)/20] =='0')
        {dir=4;
        }
}
void colision4(){//abajo

if(lab[dirx/20][(diry+20)/20] =='0')
        {dir=4;
        }
}



#endif // PERSONAJE_H_INCLUDED
