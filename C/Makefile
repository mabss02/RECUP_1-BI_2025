CC = gcc
CFLAGS = -Wall -std=c11

# Nome do executável
EXEC = sistema_bancario

# Arquivos fonte
SRCS = main.c banco.c
HEADERS = banco.h

# Definindo a pasta de destino
OBJ = $(SRCS:.c=.o)

# Regra principal para gerar o executável
all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)