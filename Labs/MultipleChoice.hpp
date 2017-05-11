#include<iostream>
#include<string>
using namespace std;
#include "Question.hpp"

#ifndef _MultipleChoice_HPP
#define _MultipleChoice_HPP


class MultipleChoiceQuestion :public Question
{
private:
	string m_answers[4];
	int m_correctAnswer;
public:
	void Display();
	void SetCorrectAnswer(int correctAnswer);
	bool CheckAnswer(int userAnswer);
	void SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3);
};

#endif
