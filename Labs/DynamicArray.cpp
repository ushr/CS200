#include "DynamicArray.hpp"

#include <iostream>
#include <string>
using namespace std;

DynamicArray::DynamicArray(int size)
{
	m_arr = nullptr;
	if (size > 0)
	{
		m_size = size;
		m_arr = new string[size];
	}
	cout << "DynamicArray constructor" << endl;
}

DynamicArray::~DynamicArray()
{
	cout << "DynamicArray destructor" << endl;
	if (m_arr != nullptr)
	{
		delete[] m_arr;
	}
	
}

void DynamicArray::Set(int index, string value)
{
	if (index >= 0 && index < m_size)
	{
		m_arr[index] = value;
	}
}

string DynamicArray::Get(int index)
{
	if (index >= 0 && index < m_size)
	{
		return m_arr[index];
	}
	else
	{
		return "";
	}


}

int DynamicArray::GetSize()
{
	return m_size;
}

void DynamicArray::Display()
{

	for (int i = 0; i < m_size; i++)
	{
		cout << i << ". " << Get(i) << endl;
		
	}
}