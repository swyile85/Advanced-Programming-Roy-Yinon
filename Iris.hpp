#ifndef Iris

#include <string>
using namespace std;

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
	void set(double cupLength, double cupWidth
		, double petalLength, double petalWidth, string type);
	void setWithString(string data, char comma);
	string type();
	double cupLength();
	double cupWidth();
	double petalLength();
	double petalWidth();
	void printIris();
};

#endif // Iris