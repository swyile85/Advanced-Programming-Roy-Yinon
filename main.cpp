#include "FilesFunc.hpp"

int main(int argc, char** argv) {
	const string classifiedFileName = "classified.csv",
		unClassifiedFilename = "Unclassified.csv";
	int k = stoi(argv[1]), numOfClassified = lengthOfFile(classifiedFileName),
		numOfUnClassified = lengthOfFile(unClassifiedFilename);
	string outputs[] = { "euclidean_output.csv",
		"chebyshev_output.csv", "manhattan_output.csv" };
	Iris* classifiedIrises = new Iris[numOfClassified];
	classifiedIrises = readFile(classifiedFileName);
	Iris* unClassifiedIrises = new Iris[numOfUnClassified];
	unClassifiedIrises = readFile(unClassifiedFilename);
	toFile(outputs[0], &Iris::euclideanDistance, classifiedIrises,
		numOfClassified, unClassifiedIrises, numOfUnClassified, k);
	toFile(outputs[1], &Iris::chebyshevDistance, classifiedIrises,
		numOfClassified, unClassifiedIrises, numOfUnClassified, k);
	toFile(outputs[2], &Iris::manhattanDistance, classifiedIrises,
		numOfClassified, unClassifiedIrises, numOfUnClassified, k);
	return 0;	
}