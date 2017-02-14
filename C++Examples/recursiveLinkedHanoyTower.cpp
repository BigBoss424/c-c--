#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct l
{
	int v;
	l*next;
};
void display(l*l,string&sg)
{
	char Result[16];
	stringstream ss;
	string f;
	if(l==NULL)
		{
			cout<<"-"<<endl<<endl;sg+="*\n";
		}
	else if(l!=NULL)
	{
		sprintf(Result, "%d", l->v);
		ss << Result;
		ss >> f;
		cout<<l->v<<endl;
		sg+=f;
		display(l->next, sg);
	}
}
