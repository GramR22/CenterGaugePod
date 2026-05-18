CXX = g++
CXXFLAGS = -Wall -std=c++17

main: main.cpp parser/can_parser.cpp foo_can/broadcaster.cpp foo_can/broadcaster.h can_frame.h can_values.h parser/parser.h
	$(CXX) $(CXXFLAGS) main.cpp parser/can_parser.cpp foo_can/broadcaster.cpp -o main

clean:
	rm -f main
