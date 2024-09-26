#include "classes.cpp"
int main(void)
{
	char name[10] = "JUN";
	char interest[10] = "Game";


	Student Someone(name, 23, interest);
	Someone.Intro();

}