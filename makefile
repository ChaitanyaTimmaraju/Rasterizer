SDIR = src
IDIR = include
ODIR = build

CC = g++ -std=c++11

CFLAGS = -I$(IDIR)

_DEPS = Vec3.h Matrix44.h Geometry.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Vec3.o Matrix44.o Driver.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
