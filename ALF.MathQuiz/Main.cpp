
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
	
	ofstream ofs(questions);
	ofs << "1 + 1 = \n2 * 3 = \n4 / 2 = \n5 - 3 = \n6 + 4 = \n8 * 2 = \n10 / 5 = \n7 - 2 = \n9 + 1 = \n3 * 5 = "; // makes the question list. Is there a better way to do this?
	ofs.close(); // close stream

	string line;
	ifstream ifs(questions);

	string input;

	ofstream ofs2(answer);


	for (int i = 0; i < 3; i++)
	{

		srand(time(NULL)); // initialize rng
		int row = rand() % 10 + 1;

		for (int i = 1; i <= row; i++)
		{
			getline(ifs, line);
		}

		cout << line << "";

		getline(cin, input);
		ofs2 << line << input << "\n";
	}

	ofs2.close();

	ifs.close(); // close stream



	(void)_getch();
	return 0;
}
