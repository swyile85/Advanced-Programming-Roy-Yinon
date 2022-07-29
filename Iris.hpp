#ifndef Iris

#include <string>
#include <iostream>
#include <math.h>
using namespace std;
/*
* This class is responsible for the Iris flower.
*/
class Iris {
	string m_type;
	double m_cupLength;
	double m_cupWidth;
	double m_petalLength;
	double m_petalWidth;
public:
	Iris(double cupLength, double cupWidth
		, double petalLength, double petalWidth, string type);
	Iris();
	Iris(double cupLength, double cupWidth,
		double petalLength, double petalWidth);
	~Iris();
	void set(double cupLength, double cupWidth
		, double petalLength, double petalWidth, string type);
	void setWithString(string data, char comma);
	void setType(string type);
	string type();
	double cupLength();
	double cupWidth();
	double petalLength();
	double petalWidth();
	void printIris();
	string classify(Iris* irises, int k, int length, double (Iris::*distanceFunc)(Iris));
	double euclideanDistance(Iris checking);
    double manhattanDistance(Iris checking);
    double chebyshevDistance(Iris checking);  
};

#endif // Iris