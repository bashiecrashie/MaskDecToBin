CC=gcc
IN=maskdectobin.c
OUT=maskdectobin
ARGS=-o

all: build

build:

	$(CC) $(IN) $(ARGS) $(OUT)
