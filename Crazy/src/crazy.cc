/*
 * Crazy.cc
 * Main file for CrazyFly
 *  Created on: 11 sep 2013
 *      Author: Peter
 */

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

	cout << "some crap\n";

	return 0;
}
