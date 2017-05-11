#include<iostream>
#include<string>
using namespace std;

#ifndef _QUESTION_HPP
#define _QUESTION_HPP


class Question
{
protected:
	string m_questionText;
public:
	void Display();
	void SetQuestionText(const string& text);
};
#endif