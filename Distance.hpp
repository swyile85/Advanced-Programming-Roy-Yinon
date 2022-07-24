#include "Iris.hpp"
using namespace std;

class Distance {
    private:
        Iris m_checked;
        Iris m_checking;
    public:
        Distance(Iris checked, Iris checcking);
        Distance();
        double euclideanDistance();
        double manhattanDistance();
        double chebyshevDistance();   
};
