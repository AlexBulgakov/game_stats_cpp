// game_stats2.0.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	score = score + 100;
	cout << "score: " << score << endl;
	score += 100;
	cout << "score: " << score << endl;

	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;

	int bonus = ++lives * 10;
	cout << "lives. bonus: " << lives << ". " << bonus << endl;
	lives = 3;
	bonus = lives++ * 10;
	cout << "lives. bonus: " << lives << ". " << bonus << endl;

	score = 4294967295;
	cout << "\nScore: " << score << endl;
	++score;
	cout << "Score: " << score << endl;

	system("pause");
    return 0;
}

