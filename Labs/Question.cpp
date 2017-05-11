#include<iostream>
#include<string>
#include "Question.hpp"

void Question::Display()
{
	cout << m_questionText << endl;
}

void Question::SetQuestionText(const string& text)
{
	m_questionText = text;
}