all:
	gcc -o libHalloFromC.so -shared -fPIC -I $(JAVA_HOME)/include -I $(JAVA_HOME)/include/linux HalloFromC.c &&\
	mv libHalloFromC.so davide/jni/libHalloFromC.so
clean:
	rm davide/jni/libHalloFromC.so
