#include <bitset>
#include <iostream>
using namespace std;

void MovePattern(bitset<64>& bit64, bitset<8>& bit8, unsigned int pos) {
	unsigned int offset = pos * 8;
	if (pos > 7) {
		throw 1;
	}
	unsigned int i;
	for (i = 0; i < 8; i++) {
		bit64.set(offset + i, bit8[i]);
	}
}

int main() {
	bitset<64> bit64;
	bitset<8> bit8("01000101");

	// before
	cout << "64 bit pattern: " << bit64.to_string() << "\n";

	MovePattern(bit64, bit8, 4);

	// after
	cout << "64 bit pattern: " << bit64.to_string() << "\n";

	cout << "Enter any key to exit..." << endl;
	string temp;
	getline(cin, temp);
	return 0;
}
