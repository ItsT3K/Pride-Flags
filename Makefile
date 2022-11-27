CXX=gcc
all: main.c
	$(CXX) -g -Wall -o pride -O2 main.c
clean:
	$(RM) pride
install:
	$(CXX) -g -Wall -o pride -O2 main.c
	sudo cp pride /usr/local/bin/pride
	rm pride