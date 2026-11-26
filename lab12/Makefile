.PHONY: runlab

bin/lab: $(wildcard src/*.cpp)
	g++ $^ -o $@

runlab: bin/lab
	./$<