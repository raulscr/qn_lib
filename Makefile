CC      = gcc
INPUT	= q7lib.c q8lib.c q15lib.c q16lib.c q31lib.c q32lib.c
OUTPUT	= teste

all: clean compile2 open

# Compilar o código fonte

compile:
	@echo "Compilando os Arquivos"
	$(CC) $(INPUT) -o $(OUTPUT)
	@echo "Ok"

# Compila com o executavel de saida

compile2:
	@echo "Compilando os Arquivos"
	$(CC) $(OUTPUT).c $(INPUT) -o $(OUTPUT)
	@echo "Ok"

# Limpar 

clean:
	@find . -type f -iname "*.o" -delete
	@find . -type f -iname "teste" -delete
	@echo "Ok"


# Testa a saida

open:
	@./$(OUTPUT)
