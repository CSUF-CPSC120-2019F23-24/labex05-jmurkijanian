// Random Rectangle

#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
//Constants, and assigned values
const int MAXHEIGHT = 3;
const int MAX = 40;
unsigned seed = time(0);
srand(seed);
int length = rand();

//Gives length its max value
//the 1 prevents it from outputing nothing
length = rand() % MAX + 1;

//outputs the # rectangle
std::string max;
max.assign(length,'#');
std::cout << max << std::endl;
std::cout << max << std::endl;
std::cout << max << std::endl;


return 0;
}
