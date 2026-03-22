#include <gsKit.h>
#include <dmaKit.h>

int main() {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    while(1) {
        // Czyścimy ekran na niebiesko
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0, 0, 255, 0, 0));
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }
    return 0;
}
