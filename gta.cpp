#include <gsKit.h>
#include <dmaKit.h>
#include <libpad.h>

int main() {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    float carX = 320.0f; // Środek ekranu PS2
    float carY = 240.0f;

    while(1) {
        // Czyścimy ekran na zielono (trawa)
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0, 100, 0, 0, 0));

        // Rysujemy "Auto" (Czerwony prostokąt)
        gsKit_prim_sprite(gsGlobal, carX - 25, carY - 15, carX + 25, carY + 15, 1, 
                          GS_SETREG_RGBAQ(255, 0, 0, 0, 0));

        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }
    return 0;
}