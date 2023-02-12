/* Program Title: Hello World
 * Description: A simple program, usually the first program that is written to get
 *              introduced to programming. 
 *
 *              However in this video we will be going over the structure of the program 
 *              and other fine points.
 * */

/* We start by including a library called iostream in order to create the output.
 * Not to be mixed up with importing. Though the process is similar. */
#include <iostream>

/* Then we declare that we are using namespace std in writing our program. std is short for standard. This is a preprocessor in order
 * for us to simply use the standard functions in the library with having to declare them as std each time. 
 *
 * As such cout<<"Hello World"<<endl vs 
 *         std::cout<<"Hello World"<<endl*/

using namespace std;

/*Now we declare the main function, most people nowadays simply declare main without any variables. Since I am reviewing and learning 
 * how to code myself in C++, I will be following the standard that the main function takes in int numIntegers and char[] *argsv. As 
 * I believe it is for the best for later purposes. */

int main(int numArgs, char* argsv[])
{   //cout is the output toward the console. We begin it by declaring cout then using these "<<" we denote the string that we would like
    //to return the console followed by another "<<" and then we endl (end the line) for the this line of code, in order to begin a new one. 
    cout<<"Hello World"<<endl;

    //We return 0 because we don't have anything else to return for the moment and from my knowledge this is how we end our main function. 
    return 0;
}//Best practice dictates that we write a one-line comment to state the end of the function.




