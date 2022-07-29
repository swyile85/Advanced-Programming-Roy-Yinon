#include "FilesFunc.hpp"

int main(int argc, char** argv) {
	Iris* classifiedIrises = new Iris[lengthOfFile("classified.csv")];
	classifiedIrises = readFile("classified.csv");
	Iris* unClassifiedIrises = new Iris[lengthOfFile("Unclassified.csv")];
	unClassifiedIrises = readFile("Unclassified.csv");
	for (int i = 0; i < lengthOfFile("Unclassified.csv"); i++) {
		unClassifiedIrises[i].setType
		(unClassifiedIrises[i].classify(classifiedIrises, stoi(argv[1]),
		lengthOfFile("classified.csv"), Iris::euclideanDistance));
	}
	return 0;	
}