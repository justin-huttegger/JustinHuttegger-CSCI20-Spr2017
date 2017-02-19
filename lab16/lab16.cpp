//Justin Huttegger

#include <iostream>
#include <string>
using namespace std;

struct MonsterStruct { // Struct for all the monster characteristics that will be entered.
    string monsterZombus = "Zombus";
    string monsterFranken = "Franken";
    string monsterHappy = "Happy";
    string monsterVegitas = "Vegitas";
    string monsterWackus = "Wackus";
    string monsterSpritem = "Spritem";
    string monsterNone = "None";
} head, eyes, ears, nose, mouth;

    string monsterName = "MonsterOne";

int main() { 
    
    cout << monsterName << ": " << head.monsterZombus << ", " << eyes.monsterSpritem << ", " << ears.monsterVegitas << ", " << nose.monsterNone << ", " << mouth.monsterWackus << endl;
    
    monsterName = "MonsterTwo";
    cout << monsterName;
    cout << ": " << head.monsterFranken << ", " << eyes.monsterHappy << ", " << ears.monsterSpritem << ", " << nose.monsterWackus << ", " << mouth.monsterWackus << endl;
    
    cout << "Enter a monster name: ";
    cin >> monsterName;
    cout << "Enter the monster characteristics:";
    cin >> head.MonsterStruct;
    
    
    
    return 0;
}