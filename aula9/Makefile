GCC = g++
GCC_FLAGS = -I include -std=c++11 
PROGRAMA = diary

$(PROGRAMA): App.o Aux.o Date.o Diary.o Time.o main.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAMA) App.o Aux.o Date.o Diary.o Time.o main.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

App.o: src/App.cpp
	$(GCC) $(GCC_FLAGS) -c src/App.cpp

Aux.o: src/Aux.cpp
	$(GCC) $(GCC_FLAGS) -c src/Aux.cpp

Date.o: src/Date.cpp
	$(GCC) $(GCC_FLAGS) -c src/Date.cpp

Diary.o: src/Diary.cpp
	$(GCC) $(GCC_FLAGS) -c src/Diary.cpp


Time.o: src/Time.cpp
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp