.PHONY: runlab clean

ARGS = -Wall -Wextra

bin/lab: $(wildcard src/*.cpp)
	g++ $(ARGS) $^ -o $@

runlab: bin/lab
	./$<

clean:
	rm bin/lab