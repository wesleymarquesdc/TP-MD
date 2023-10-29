CC = gcc
LIBS = -lm
BIN = bin
SRC = src
CFLAGS = -Wall

ESPQUADRADA = $(BIN)/espquadrada
ESPTRIANGULAR = $(BIN)/esptriangular

all: $(ESPQUADRADA) $(ESPTRIANGULAR)

$(BIN)/espquadrada: $(SRC)/espquadrada.c
	@$(CC) $(CFLAGS) -o $(BIN)/espquadrada $(SRC)/espquadrada.c $(LIBS)

$(BIN)/esptriangular: $(SRC)/esptriangular.c
	@$(CC) $(CFLAGS) -o $(BIN)/esptriangular $(SRC)/esptriangular.c $(LIBS)

run_espquadrada: $(ESPQUADRADA)
	@$(ESPQUADRADA)

run_esptriangular: $(ESPTRIANGULAR)
	@$(ESPTRIANGULAR)

clean:
	@rm -f $(BIN)/*
