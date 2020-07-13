GCC = g++
GCC_FLAGS = -I include -std=c++11 
PROGRAMA = empresa

$(PROGRAMA): Empresa.o Funcionario.o main.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) Empresa.o Funcionario.o main.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp
Empresa.o: src/Empresa.cpp
	$(GCC) $(GCC_FLAGS) -c src/Empresa.cpp
Funcionario.o: src/Funcionario.cpp
	$(GCC) $(GCC_FLAGS) -c src/Funcionario.cpp
clean:
	rm -f *.o
	rm $(PROGRAMA)