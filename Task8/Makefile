all: prog

prog: task7_main.cpp lib.a
	g++ task7_main.cpp lib.a

task7_calculate.o: task7_calculate.cpp
	g++ -I . -c task7_calculate.cpp

lib.a: task7_calculate.o
	ar rvs lib.a task7_calculate.o