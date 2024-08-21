unittest.exe: unittest.cc
	g++ -g -ggdb -std=c++17 $^ -o $@
