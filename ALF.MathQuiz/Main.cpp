
// Math Quiz
// Alex Freimuth

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;

void makeNumber();

int main()
{
	string questions = "C:\\Temp\\TestQuestion.txt";
	string answer = "c:\\Temp\\TestAnswers.txt";

	string line;
	ifstream ifs(questions);

	string input;

	ofstream ofs2(answer);

	cout << "Assignment 5 - Math Quiz\n" << "Have the test questions prepared at C:\\Temp\\TestQuestion.txt\n";

	srand(time(NULL)); // initialize rng

	for (int i = 0; i < 3; i++)
	{

		
		int row = rand() % 10 + 1;

		for (int i = 1; i <= row; i++)
		{
			getline(ifs, line);
		}

		cout << line << "";

		getline(cin, input);
		ofs2 << line << input << "\n";
	}

	cout << "Results saved at c:\\Temp\\TestAnswers.txt";

	ofs2.close();

	ifs.close(); // close stream



	(void)_getch();
	return 0;
}
