#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	for (int i = 0; i <= 100; i++) {
		system("cls");
		cout << i << "%";
		if (i == 100) {
			cout << "\nThe Pentagon has been successfully hacked.\n";
			break;
		}
		Sleep(50);
	}

	return 0;
}