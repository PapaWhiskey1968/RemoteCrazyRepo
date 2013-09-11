#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	stringstream msg;

	msg << "Hello CrazyFlie\n";

	cout << msg.str();

	msg << "Hello CrazyFlie, first commit\n";

	cout << msg.str();


	return 0;
}
