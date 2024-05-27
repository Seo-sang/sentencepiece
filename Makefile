test: test.cpp ./src/sentencepiece_processor.cc
	g++ --std=c++14 test.cpp ./src/sentencepiece_processor.cc -o test
