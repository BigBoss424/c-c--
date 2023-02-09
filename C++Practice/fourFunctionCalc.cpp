#include <iostream>

using namespace std;


int add(int x, int y){
    return x+y;
}

int subtract(int x, int y){
    return x-y;
}

int divide(int x, int y){
    return x/y;
}

int multiply(int x, int y){
    return x*y;
}

void displayMenu(){
    cout<<"Welcome to Four Function Calculator"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Which function would you like to try"<<endl;
    cout<<"1) Addition of Two Integers"<<endl;
    cout<<"2) Subtraction of Two Integers"<<endl;
    cout<<"3) Division of Two Integers"<<endl;
    cout<<"4) Multiplication of Two Integers"<<endl;
    cout<<"5) Quit"<<endl;
    cout<<"Choice: "<<endl;
}

int main(int numArgs, char *passingArgs[])
{
    int choice = 0;
    int x = 0;
    int y = 0;
    int result = 0;
    
    displayMenu();
    cin>>choice;
    do{
        if(choice == 1)
        {
            cout<<"Enter an Integer for the value of X:"<<endl;
            cin>>x;
            cout<<"Enter an Integer for the value of Y:"<<endl;
            cin>>y;
            result = add(x, y);
            cout <<"The result is: "<<result<<endl;
            return 0;
        }else if(choice == 2)
        {
            cout<<"Enter an Integer for the value of X:"<<endl;
            cin>>x;
            cout<<"Enter an Integer for the value of Y:"<<endl;
            cin>>y;
            result = subtract(x, y);
            cout<<"The result is: "<<result<<endl;
            return 0;
        }else if(choice == 3)
        {
            cout<<"Enter an Integer for the value of X:"<<endl;
            cin>>x;
            cout<<"Enter an Integer for the value of Y:"<<endl;
            cin>>y;
            result = divide(x,y);
            cout<<"The result is: "<<result<<endl;
            return 0;
        }else if(choice == 4)
        {
            cout<<"Enter an Integer for the value of X:"<<endl;
            cin>>x;
            cout<<"Enter an Integer for the value of Y:"<<endl;
            cin>>y;
            result = multiply(x,y);
            cout<<"The result is: "<<result<<endl;
            return 0;
        }
    }while(choice != 5);
    
    return 0;
}
