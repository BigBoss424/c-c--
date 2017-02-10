#include <iostream>
#include <fstream>
#include <cctype>
#include <string>


using namespace std;


class loc_counter {
public:
	loc_counter(string filename);
	int return_number();
	int count_lines();

private:
	string line, filename;
	int number_of_lines;
		
};


loc_counter::loc_counter(string file_name)
{
	filename = file_name;
}

int loc_counter::count_lines()
{
	ifstream myfile(filename.c_str());

	while (getline(myfile, line))
	{
		if (line[0] == '/' || line[0] == '\0')
		{fgf
			number_of_lines--;
		}
		else
		{
			number_of_lines++;
		}
	}
	return number_of_lines;
}

int loc_counter::return_number()
{
	return number_of_lines;
}

int main()
{
	string filename_input;

	cout << "Please enter the name of the file: " << endl;
	cin >> filename_input;

	loc_counter loc(filename_input);
	loc.count_lines();

	cout << "Number of lines of code: " << loc.return_number() << endl;

	return 0;
}
