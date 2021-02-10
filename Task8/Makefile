all: prog

prog: task7_main.cpp  task8_lib.lib
	g++ task7_main.cpp  task8_lib.lib

task7_calculate.o: task7_calculate.cpp
	g++ -I . -c task7_calculate.cpp

task8_lib.lib: task7_calculate.o
	ar rvs  task8_lib.lib task7_calculate.o