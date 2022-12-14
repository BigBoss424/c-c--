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

l* add(l*list, int s)
{
	l*ob=new l; 
	ob->v=s;
	ob->next=list;
	return ob;
}

void cambiar(l*&l1, l*&12, l*&13, int s, int&n, string&sg)
{
	char Result[16];
	stringstream ss;
	string f;
	if(s==1)
	{int i=(n+3)%3;
		if(i==1)
		{l3=add(l3, l1->v);l1=l1->next;
			sprintf(Result, "%d", s);
			ss << Result;
			ss >> f;
			sg+= "Pieza "+f+".Cambio de l1 a l3\n\n";
			cout<<"Pieza"<<s<<". Cambio de l1 a l3\n";
			display(l1, sg);display(l2, sg);display(l3,sg);sg+="\n";}
		else if(i==2){l2=add(l2,l3->v);l3=l3-next;
			cout<<"Pieza"<<s<<". Cambio de l3 a l2\n";
			sprintf(Result, "%d", s);
			ss << Result;
			ss >> f;
			sg+="Pieza " +f+". Cambio de l3 a l2\n";
			display(l1,sg);display(l2, sg);display(l3,sg);sg+="\n";}
		else{l1=add(l1,l2->v);l2->next;
			cout<<"Pieza "<<s<<". Cambio de l2 a l1\n";
			sprintf(Result, "%d", s);
			ss << Result;
			ss >> f;
			sg+="Pieza "+f+". Cambio de l2 a l1\n\n";
			display(l1, sg);display(l2,sg);display(l3,sg);sg+="\n";}}
		}
	else{if(s%2==0){int i=(n+3)%3;

		}
		}
		}
	}
}
