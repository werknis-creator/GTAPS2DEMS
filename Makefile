EE_BIN = MAIN.ELF
EE_OBJS = gta.o
EE_LIBS = -lgsKit -ldmaKit -ldraw -lgraph -lmath3d -lpacket -ldma -lm

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
