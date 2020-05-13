#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
ID: William_Gong 
PROG: ride
Lang: C++
*/

char alphabet[] = "xABCDEFGHIJKLMNOPQRSTUVWXYZ";

int convert2num(char);

int main()
{

	int counter = 0;
	string line;
	string comet;
	string group;
	ofstream outputFile;
	ifstream inputFile("c:\\temp\\ride.in");
	if (inputFile.is_open())
	{
		while (getline(inputFile, line))
		{	
			if (counter == 0)
			{
				comet = line;
				counter++;
			}
			if (counter == 1)
			{
				group = line;
			}

		}
		inputFile.close();
	}
	long long int num1 = 1;
	long long int num2 = 1;
	for (unsigned int i = 0; i < comet.length(); i++)
	{
		num1 = num1 * (convert2num(comet.at(i)));
	}
	for (unsigned int i = 0; i < group.length(); i++)
	{
		num2 = num2 * (convert2num(group.at(i)));
	}
	outputFile.open("c:\\temp\\ride.out");
	if (num1 % 47 == num2 % 47)
	{
		outputFile << "GO\n";
	}
	else
	{
		outputFile << "STAY\n";
	}
	outputFile.close();
}


int convert2num(char a)
{
	for (int n = 1; n <= 26; n++)
	{
		if (a == alphabet[n])
		{
			return n;
		}

	}
};