#include "oscheck.h"
#include <iostream>
using namespace std;

int main() {
#ifdef os_linux
	cout << "linux" << endl;
#endif
#ifdef os_win
	cout << "win" << endl;
#endif
	return 0;
}