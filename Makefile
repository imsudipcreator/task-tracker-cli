all: out/task-cli

out/task-cli: out/main.o
	g++ out/main.o -o out/task-cli

out/main.o: src/main.cpp
	mkdir -p out
	g++ -c src/main.cpp -o out/main.o

clean:
	@echo "Removing all contents from out directory..."
	rm -rf out
