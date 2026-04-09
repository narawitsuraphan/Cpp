#include <iostream>
#include <string>

using namespace std;
void showmenu() {
	cout << "===== NS_SHOP =====\n";
	cout << "1. Iron Sword (50 Gold)\n";
	cout << "2. Magic Wand (100 Gold)\n";
	cout << "3. Health Potion (20 Gold)\n";
	cout << "===================\n";
	cout << "Please select an item (1-3):";
}

void buyitme(int A) {
	if (A == 1) {
		cout << ">> You bought a Magic Wand! Sparkly!\n";
	}
	else if (A == 2) {
		cout << ">> You bought a Magic Wand! Sparkly!\n";
	}
	else if (A == 3) {
		cout << ">> You bought a Health Potion! Tasty!\n";
	}
	else {
		cout << ">> Invalid choice. The shopkeeper looks confused.\n";
	}
}

int main() {
	int myshop;

	showmenu();
	cin >> myshop;

	buyitme(myshop);

	cout << "\nThank you for visiting Jimmy's Shop!\n";

	return 0;
	}