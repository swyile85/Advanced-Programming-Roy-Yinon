#include <string>
using namespace std;

class Iris {
	string m_type;
	double m_cupLength;
	double m_cupWidth;
	double m_petalLength;
	double m_petalWidth;
public:
	Iris(string type, double cupLength, double cupWidth
		, double petalLength, double petalWidth);
	Iris();
	void set(string type, double cupLength, double cupWidth
		, double petalLength, double petalWidth);
	void setWithString(string data, char comma);
	string type();
	double cupLength();
	double cupWidth();
	double petalLength();
	double petalWidth();
	void printIris();
};