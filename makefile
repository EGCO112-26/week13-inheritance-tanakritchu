compile: LL_test.cpp 
	 g++  NODE.cpp LL.cpp LL_test.cpp -o inh

run: LL
	 ./LL


clean: LL
	 rm LL
