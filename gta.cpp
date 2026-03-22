#include <gsKit.h>
#include <dmaKit.h>

int main(int argc, char *argv[]) {
    GSGLOBAL *gsGlobal = gsKit_init_global();
    dmaKit_init_all();
    gsKit_init_screen(gsGlobal);

    // Definiujemy czerwony kolor
    u64 Red = GS_SETREG_RGBAQ(255, 0, 0, 0x80, 0x00);

    while(1) {
        // Tło: Ciemna zieleń (jak trawa w starym GTA)
        gsKit_clear(gsGlobal, GS_SETREG_RGBAQ(0, 50, 0, 0, 0));

        // Nasze "auto": Czerwony kwadrat na środku
        gsKit_prim_sprite(gsGlobal, 250.0f, 200.0f, 350.0f, 300.0f, 1, Red);

        gsKit_queue_exec(gsGlobal);
        gsKit_sync_flip(gsGlobal);
    }

    return 0;
}
