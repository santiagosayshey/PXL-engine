main: main.cpp src/engine/Sound.cpp 
	g++ main.cpp src/engine/Sound.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -std=c++11 -o main.out
	clear
	./main.out