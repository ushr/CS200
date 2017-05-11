#include<iostream>
#include<string>
using namespace std;
#include "Question.hpp"

#ifndef _TrueFalseQuestion_HPP
#define _TrueFalseQuestion_HPP


class TrueFalseQuestion :public Question
{
private:
	string m_correctAnswer;
public:
	void Display();
	void SetCorrectAnswer(const string& correctAnswer);
	bool CheckAnswer(const string& userAnswer);
};
#endif