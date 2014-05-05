all: mavlink_test
	
mavlink_test: mavlink_test.o
	g++ mavlink_test.o -o mavlink_test

mavlink_test.o: mavlink_test.cpp
	g++ -I mavlink/v1.0 -c mavlink_test.cpp

clean:
	rm -rf *o mavlink_test