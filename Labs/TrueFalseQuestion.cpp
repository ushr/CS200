#include<iostream>
#include<string>
using namespace std;

#include "TrueFalseQuestion.hpp"

void TrueFalseQuestion::Display()
{
	Question::Display();
	cout << "(true) or (false)";
}

void TrueFalseQuestion::SetCorrectAnswer(const string& correctAnswer)
{

	m_correctAnswer = correctAnswer;
}

bool TrueFalseQuestion::CheckAnswer(const string& userAnswer)
{
	if (userAnswer == m_correctAnswer)
	{
		return true;
	}
	else
	{
		return false;
	}
}