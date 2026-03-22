EE_BIN = MAIN.ELF
EE_OBJS = gta.o

EE_INCS = -I$(PS2DEV)/gsKit/include -I$(PS2SDK)/ports/include
EE_LDFLAGS = -L$(PS2DEV)/gsKit/lib -L$(PS2SDK)/ports/lib

# Dodano -lgskit obok -lgsKit (wazna jest wielkosc liter!)
EE_LIBS = -lgsKit -lgskit -ldmaKit -ldraw -lgraph -lmath3d -lpacket -ldma -lm

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
