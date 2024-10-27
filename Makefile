HEADER = -I/opt/gurobi911/linux64/include 
LIBPATH = -L/opt/gurobi911/linux64/lib 
LIB = -lgurobi91




run: main.cpp DeLuxing.cpp
	g++  $(HEADER) $^ $(LIBPATH) $(LIB) -O3  -std=c++11 -fopenmp -o $@ 


