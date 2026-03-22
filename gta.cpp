#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    
    // Zmieniono z dmaKit_init_all na dmaKit_init
    dmaKit_init(); 
    gsKit_init_screen(gsGlobal);

    // Reczne ustawienie koloru niebieskiego
    u64 Blue = GS_SETREG_RGBA(0x00, 0x00, 0xFF, 0x80);

    while(1) {
        gsKit_clear(gsGlobal, Blue);
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}
