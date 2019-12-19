all:
	g++ main.cpp -o test.exe


test: all
	test.exe
