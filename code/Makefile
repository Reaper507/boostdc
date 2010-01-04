boostdc : main.o hub.o thread.o
	g++ -o boostdc -lpthread main.o hub.o thread.o

main.o : main.cpp net/hub.h
	g++ -c main.cpp

hub.o : net/hub.cpp net/hub.h
	g++ -c net/hub.cpp

thread.o : thread/thread.h
	g++ -c thread/thread.cpp

clean :
	rm boostdc main.o hub.o thread.o