#include<iostream>
#include<string>
using namespace std;
#include "MultipleChoice.hpp"

void MultipleChoiceQuestion::Display()
{
	Question::Display();
	for (int i = 0; i<4; i++)
	{
		cout << i << ". " << m_answers[i] << endl;
	}
}
void MultipleChoiceQuestion::SetCorrectAnswer(int correctAnswer)
{
	m_correctAnswer = correctAnswer;
}
bool MultipleChoiceQuestion::CheckAnswer(int userAnswer)
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
void MultipleChoiceQuestion::SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3)
{

	m_answers[0] = a0;
	m_answers[1] = a1;
	m_answers[2] = a2;
	m_answers[3] = a3;
}