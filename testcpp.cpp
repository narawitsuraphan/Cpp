#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int monster_hp = 100;
    int your_atk;
    while (monster_hp > 0) {
        your_atk = rand() % 11 + 5;
        monster_hp = monster_hp - your_atk;

        cout << "You dealt" << your_atk << "damage!";
        cout << "monster_hp" << monster_hp << "\n";
    }
    return 0;
}
