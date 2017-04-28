#ifndef _DYNAMIC_ARRAY_HPP
#define _DYNAMIC_ARRAY_HPP

#include<iostream>
#include<string>
using namespace std;
class DynamicArray
{
private:
	string* m_arr;
	int m_size;

public:
	DynamicArray(int size);
	~DynamicArray();
	void Set(int index, string value);
	string Get(int index);
	int GetSize();
	void Display();

};



#endif