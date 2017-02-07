


#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <regex>


using namespace std;


class loc_counter {
public:
	loc_counter(string filename);
	int return_number();
	int return_objects();
	int return_methods();

	void count_lines();
	void count_objects();
	void count_methods();

private:
	string line, filename;
	int number_of_lines = 0;
	int lines_of_objects = 0;
	int number_of_methods = 0;
		
};


loc_counter::loc_counter(string file_name)
{
	filename = file_name;
}

void loc_counter::count_lines()
{
	ifstream myfile1(filename.c_str());

	while (getline(myfile1, line))
	{
		if (line.empty() || (line.find("//") == 0))
		{
			continue;
		}
		number_of_lines++;
	}
	myfile1.close();
}

void loc_counter::count_objects()
{
	ifstream myfile2(filename.c_str());

	while (getline(myfile2, line))
	{
		if ((line.find("class") == true) && (filename.find("};") == true))
		{
			continue;
		}
		lines_of_objects++;
	}
	myfile2.close();
}

void loc_counter::count_methods()
{
	ifstream myfile3(filename.c_str());
	
	while(getline(myfile3, line))
	{
		string str("adsjkf::s");
		regex r("/::/g");
		smatch m;
		regex_search(str, m, r);
		cout << endl;
	
	    cout << m.size();
		number_of_methods++;
	}		
	myfile3.close();
}

int loc_counter::return_number()
{
	return number_of_lines;
}

int loc_counter::return_objects()
{
	return lines_of_objects;
}

int loc_counter::return_methods()
{
	return number_of_methods;
}

int main()
{
	string filename_input;
	string program_number;

	cout << "Plase enter the name of the project: " << endl;
	cin >> program_number;
	cout << "Please enter the name of the file: " << endl;
	cin >> filename_input;

	loc_counter loc(filename_input);
	loc.count_lines();
	loc.count_objects();
	loc.count_methods();

	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "|| Program Number   ||   Object Name   ||   # of Methods   ||   Object LOC   ||   Total Program LOC ||" << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
	cout << program_number << "			" << filename_input << "			"  << loc.return_methods() << "		" << loc.return_objects()  << "		   	" << loc.return_number() << endl;

	system("PAUSE");
	return 0;
}