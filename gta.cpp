#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    
    // Ustawiamy dmaKit z domyslnymi parametrami (D_CTRL register settings)
    // D_CTRL: RELE=0, MFD=0, STS=0, STD=0, RCYC=0, RELEASE_TIME=0
    dmaKit_init(0, 0, 0, 0, 0, 0); 
    
    gsKit_init_screen(gsGlobal);

    // Standardowy kolor niebieski
    u64 Blue = GS_SETREG_RGBA(0x00, 0x00, 0xFF, 0x80);

    while(1) {
        gsKit_clear(gsGlobal, Blue);
        
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}
