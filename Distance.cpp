#include "Distance.hpp"
#include <math.h>
#include <iostream>

Distance::Distance(Iris checked, Iris checking) {
    m_checked = checked;
    m_checking = checking;
}
Distance::Distance() {
    m_checked = Iris();
    m_checking = Iris();
}
double Distance::euclideanDistance() {
    double dx = pow((m_checked.cupLength() - m_checking.cupLength()), 2);
    double dy = pow((m_checked.cupWidth() - m_checking.cupWidth()), 2);
    double dz = pow((m_checked.petalWidth() - m_checking.petalWidth()), 2);
    double dw = pow((m_checked.petalLength() - m_checking.petalLength()), 2);
    return sqrt(dx + dy  + dz + dw);
}
double Distance::manhattanDistance() {
    double dx = abs(m_checked.cupLength() - m_checking.cupLength());
    double dy = abs(m_checked.cupWidth() - m_checking.cupWidth());
    double dz = abs(m_checked.petalWidth() - m_checking.petalWidth());
    double dw = abs(m_checked.petalLength() - m_checking.petalLength());
    return sqrt(dx + dy  + dz + dw); 
}
double Distance::chebyshevDistance() {
    double dx = abs(m_checked.cupLength() - m_checking.cupLength());
    double dy = abs(m_checked.cupWidth() - m_checking.cupWidth());
    double dz = abs(m_checked.petalWidth() - m_checking.petalWidth());
    double dw = abs(m_checked.petalLength() - m_checking.petalLength());
    double maxXY = max(dx, dy);   
    double maxZW = max(dz, dw);
    return max(maxXY, maxZW);
}