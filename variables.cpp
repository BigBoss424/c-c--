int int main(int argc, char const *argv[])
{
	
	// set output format for bool variables
	// to true and flase instead
	//of 1 and 0

	cout.setf(cout.boolalpha);

	//input two values
	int nArg1;
	cout << "Input value 1: ";
	cin >> nArg1;
	cout << "Input value 2: ";
	cint >>nArg2;

	// compate them and store the result
	bool b;
	b = nArg1 == nArg2;

	cout << "The statement, " << nArg1
		 << " equals" << nArg2
		 << " is " << b
		 << endl;

	System("PAUSE");
	return 0;
}