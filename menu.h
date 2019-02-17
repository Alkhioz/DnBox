#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include<allegro.h>

int men1=0;
void menu_al(){
    install_mouse();

    MIDI *musica2;
    BITMAP *m_buffer;
    BITMAP *menu_1;
    BITMAP *menu_2;
    BITMAP *menu_3;
    BITMAP *cursor;
    musica2 = load_midi("musi2.mid");
    m_buffer = create_bitmap(600,600);
    menu_1 = load_bitmap("menu.bmp",NULL);
    menu_2 = load_bitmap("menu1.bmp",NULL);
    menu_3 = load_bitmap("menu2.bmp",NULL);
    cursor = load_bitmap("cursor.bmp",NULL);


    bool termi_menu = false;
    play_midi(musica2,1/*el uno es para que se repita*/);
    while(!termi_menu){
        if(mouse_x > 289 && mouse_x < 583 && mouse_y > 352 && mouse_y < 429){
            blit(menu_2,m_buffer,0,0,0,0,600,600);
            if(mouse_b & 1){//esto recinice el botn izquierdo
                termi_menu = true;
            }
        } else if(mouse_x > 289 && mouse_x < 583 && mouse_y > 459 && mouse_y < 534){
            blit(menu_3,m_buffer,0,0,0,0,600,600);
            if(mouse_b & 1){//esto recinice el botn izquierdo
                men1=1;
                termi_menu = true;
            }
        }else blit(menu_1,m_buffer,0,0,0,0,600,600);
        masked_blit(cursor,m_buffer,0,0,mouse_x,mouse_y,13,22);
        blit(m_buffer,screen,0,0,0,0,600,600);
    }
}

#endif // MENU_H_INCLUDED
