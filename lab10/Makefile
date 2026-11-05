.PHONY: all lab home runlab runhome

all: lab home

lab:
	cd src/lab && g++ main.cpp log.cpp figures/rectangle.cpp figures/circle.cpp figures/paralellogram.cpp cylinders/cylinder.cpp cylinders/cirCylinder.cpp cylinders/rectCylinder.cpp cylinders/parCylinder.cpp -o main

home:
	cd src/home && g++ main.cpp log.cpp books/book.cpp books/textbook.cpp books/comics.cpp bookshelf.cpp -o main

runlab: lab
	cd src/lab && ./main

runhome: home
	cd src/home && ./main