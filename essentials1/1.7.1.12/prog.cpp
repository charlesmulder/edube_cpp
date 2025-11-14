#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	float value;

	cout << "Give me a number and I will find the square root?" << endl;
	cin >> value;
	if( value < 0 ) {
		return 1;
	}
	cout << sqrtf(value) << endl;
}
