#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    while(1) {
        // Czyścimy ekran na kolor niebieski (RGBA: 0, 0, 255, 128)
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0x00, 0x00, 0xFF, 0x80, 0x00));
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}
