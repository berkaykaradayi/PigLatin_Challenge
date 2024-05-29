#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;
const int MAX = 100;
const string st = "ay";

void pig_latin(char char_array[]);

int main()
{
	string str;

	cout << "Please enter a string"<<bosluk;
	//cin >> str; it only takes 1 word at a time, but we need to take whole sentence. 
	   //To get get:

	getline(cin, str);

	const int length = str.length();

	// declaring character array (+1 for null terminator) 
	   
	    char *char_array = new char[length + 1];
		//char *temp= new char[length + 1];		

	char_array = &str[0]; // converting string to char array for operation
	 
	cout <<bosluk<< "Entered string: " << char_array<<bosluk;

	//temp = &str[1];
	//		
	//cout << "here is your Pig Latin word: " << temp <<char_array[0]<< st << bosluk; /// only works for just 1 word, we need to do this for 
																							////every words in the sentence
	
	cout << "Here is your Pig Latin word: ";
	pig_latin(char_array); // sending our array to function.
	

	return 0;
}

void pig_latin(char char_array[])
{   
	int i = 0;
	char temp;
	

	while (char_array[i]!='\0')
	{
		if (char_array[i]!=' ')
		{
				temp = char_array[i];
				do
				{
					cout << char_array[++i];

				} while (char_array[i + 1] != ' ' && char_array[i + 1] != '\0');


				i++;
				cout << temp << st;
		}
		
		else
		{
			i++;
			cout << " ";
		}		
	}
	cout << bosluk;

}