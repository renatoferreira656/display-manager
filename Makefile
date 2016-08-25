default: all
all: directories display-manager

directories: target

target:
	mkdir -p target

display-manager: src/main.c
	gcc -g -o target/display-manager.o src/login.c src/main.c

clean clear:
	rm -rf display-manager
