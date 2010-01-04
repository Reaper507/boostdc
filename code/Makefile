boostdc : main.o hub.o
	g++ -o boostdc -lpthread main.o hub.o

main.o : main.cpp net/hub.h
	g++ -c main.cpp

hub.o : net/hub.cpp net/hub.h
	g++ -c net/hub.cpp

clean :
	rm boostdc main.o hub.o