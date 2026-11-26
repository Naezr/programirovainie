.PHONY: runlab clean

ARGS = -Wall -Wextra

all: bin/lab

bin/lab: $(wildcard src/*.cpp)
	g++ $(ARGS) $^ -o $@

runlab: bin/lab
	./$<

clean:
	rm bin/lab