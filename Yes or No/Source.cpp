#include <iostream>
#include <string>
using namespace std;
char askYesNo1();
char askYesNo2(string question);
int main()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";
	char answer2 = askYesNo2("Do you wish to save your game?");
	cout << "Thanks for answering: " << answer2 << "\n";
	return 0;
}
char askYesNo1()
{
	char reponse1;
	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> reponse1;
	} while (reponse1 != 'y' && reponse1 != 'n');
	return reponse1;
}
char askYesNo2(string question)
{
	char reponse2;
	do
	{
		cout << question << "(y/n): ";
		cin >> reponse2;
	} while (reponse2 != 'y' && reponse2 != 'n');
	return reponse2;
}