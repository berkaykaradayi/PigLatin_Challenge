#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;
const int MAX = 100;



int main()
{
	string str;

	cout << "Please enter a string"<<bosluk;
	cin >> str;

	const int length = str.length();

	// declaring character array (+1 for null terminator) 
	   
	    char *char_array = new char[length + 1];
		char *temp= new char[length + 1];
		const string st = "ay";

	char_array = &str[0]; // conversting string to char array for operations
	 
				//strcpy(char_array, str.c_str());
	
	/* for (int i = 0; i < length; i++)
	 {
		 cout <<"Entered string: "<< char_array[i];
	 }*/
	 
	cout << "Entered string: " << char_array;

	temp = &str[1];
			
	cout << "here is your Pig Latin word: " << temp <<char_array[0]<< st << bosluk; ///7 only works for just 1 word, we need to do this for 
																								////every words in the sentence
			
	   
	 //puts(char_array);

	 //delete[] str;
	return 0;
}