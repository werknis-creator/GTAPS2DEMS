EE_BIN = MAIN.ELF
EE_OBJS = gta.o

# Poprawione sciezki - serwer szuka ich tutaj
EE_INCS = -I$(PS2SDK)/ports/include -I$(PS2DEV)/gsKit/include
EE_LDFLAGS = -L$(PS2SDK)/ports/lib -L$(PS2DEV)/gsKit/lib

# Biblioteki (kolejnosc ma znaczenie)
EE_LIBS = -lgsKit -lgskit -ldmaKit -ldraw -lgraph -lmath3d -lpacket -ldma -lm

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
