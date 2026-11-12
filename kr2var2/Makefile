.PHONY: all compile run

all: compile

compile:
	cd src && g++ main.cpp books/book.cpp books/textbook.cpp books/comics.cpp -o ../main

run: compile
	./main
