SDIR = src
IDIR = include
ODIR = build

CC = g++

CFLAGS = -I$(IDIR)

_DEPS = Vec3.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Vec3.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
