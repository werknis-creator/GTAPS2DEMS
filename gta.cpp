#include <gsKit.h>
#include <dmaKit.h>
#include <malloc.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    u64 Color = GS_SETREG_RGBAQ(255, 0, 0, 0x80, 0x00);

    while(1) {
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0x00, 0x40, 0x00, 0x00, 0x00));
        gsKit_prim_sprite(gsGlobal, 200.0f, 200.0f, 300.0f, 300.0f, 1, Color);
        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }
    return 0;
}
