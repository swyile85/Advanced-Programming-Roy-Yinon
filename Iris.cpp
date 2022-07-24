#include "Iris.hpp"
#include <iostream>

Iris::Iris(string type, double cupLength, double cupWidth
	, double petalLength, double petalWidth)
{
	m_type = type;
	m_cupLength = cupLength;
	m_cupWidth = cupWidth;
	m_petalLength = petalLength;
	m_petalWidth = petalWidth;
}

Iris::Iris() {
	m_type = "none";
	m_cupLength = 0.0;
	m_cupWidth = 0.0;
	m_petalLength = 0.0;
	m_petalWidth = 0.0;
}

void Iris::set(string type, double cupLength, double cupWidth
	, double petalLength, double petalWidth)
{
	m_type = type;
	m_cupLength = cupLength;
	m_cupWidth = cupWidth;
	m_petalLength = petalLength;
	m_petalWidth = petalWidth;
}

void Iris::setWithString(string data, char comma)
{
	int i, j = 0;
	i = data.find(comma);
	m_cupLength = stod(data.substr(j, i - j));
	j = i + 1;
	i = data.find(comma, j);
	m_cupWidth = stod(data.substr(j, i - j));
	j = i + 1;
	i = data.find(comma, j);
	m_petalLength = stod(data.substr(j, i - j));
	j = i + 1;
	i = data.find(comma, j);
	m_petalWidth = stod(data.substr(j, i - j));
	j = i + 1;
	i = data.find('\0', j);
	m_type = data.substr(j, i - j);
}

string Iris::type() {
	return m_type;
}

double Iris::cupLength() {
	return m_cupLength;
}

double Iris::cupWidth() {
	return m_cupWidth;
}

double Iris::petalLength() {
	return m_petalLength;
}

double Iris::petalWidth() {
	return m_petalWidth;
}

void Iris::printIris() {
	cout << "cup length: " << m_cupLength << ", cup width: " << m_cupWidth << ", petal length: " << m_petalLength << ", petal width: " << m_petalWidth << ", type: " + m_type;
}