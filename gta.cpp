#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    // W starszych wersjach używamy prostszego makra dla koloru:
    // Parametry: Red, Green, Blue, Alpha
    u64 Blue = GS_SETREG_RGBA(0x00, 0x00, 0xFF, 0x80);

    while(1) {
        // Czyścimy ekran na niebiesko
        gsKit_clear(gsGlobal, Blue);
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}
