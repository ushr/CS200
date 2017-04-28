#include "Kitten.hpp"
#include <iostream>
#include <string>
using namespace std;


// This is needed for our static member variable
int Kitten::m_kittenCount = 0;

Kitten::Kitten(string name)
{
	m_name = name;
	m_kittenCount++;
}

void Kitten::Display()
{
	cout << "kitten: " << m_name << "," << "kitten count: " << m_kittenCount << endl;
}