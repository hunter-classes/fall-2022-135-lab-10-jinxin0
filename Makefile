HEADERS = time.h
OBJS = time.o

main: main.o ${OBJS}
	g++ -o main main.o ${OBJS}

tests: tests.o ${OBJS}
	g++ -o tests tests.o ${OBJS}

time.o: time.cpp time.h

main.o: main.cpp ${HEADERS}

tests.o: tests.cpp ${HEADERS}

clean:
	rm -f ${OBJS}
