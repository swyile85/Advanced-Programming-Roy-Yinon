#ifndef FilesFunc

#include <fstream>
#include <list>
#include "Iris.hpp"
/*
* This file is responsible for the functions on the files;
*/
int lengthOfFile(string fileName);
Iris* readFile(string fileName);
void toFile(string fileName, double(Iris::* distanceFunc)(Iris),
    Iris* classifiedIrises, int numOfClassified, Iris* unClassifiedIrises,
    int numOfUnClassified, int k);

#endif // FilesFunc