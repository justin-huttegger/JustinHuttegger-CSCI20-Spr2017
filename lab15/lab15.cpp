//Justin Huttegger

#include <iostream>
#include <string>
using namespace std;

int main() {
    string wordAdjective = "great";
    string  wordPluralNoun = "Jawas";
    string  wordNoun = "dog";
    string  wordAdjectiveTwo = "tiny";
    string  wordPartOfBody = "head";
    string  wordAdjectiveThree = "high";
    string  wordPluralNounTwo = "Death Star";
    string  wordPartOfBodyTwo = "leg";
    string  wordAdjectiveFour = "giant";
    string  wordAdverb = "delicately";
    string  wordNounTwo = "horse";
    
    cout << "Enter an adjective:" << endl;
    cin >> wordAdjective;
    
    cout << "Enter a plural noun:" << endl;
    cin >> wordPluralNoun;
    
    cout << "Enter a noun:" << endl;
    cin >> wordNoun;
    
    cout << "Enter an adjective:" << endl;
    cin >> wordAdjectiveTwo;
    
    cout << "Enter a part of the body:" << endl;
    cin >> wordPartOfBody;
    
    cout << "Enter an adjective:" << endl;
    cin >> wordAdjectiveThree;
    
    cout << "Enter a plural noun:" << endl;
    cin >> wordPluralNounTwo;
    
    cout << "Enter a part of the body:" << endl;
    cin >> wordPartOfBodyTwo;
    
    cout << "Enter an adjective:" << endl;
    cin >> wordAdjectiveFour;
    
    cout << "Enter an adverb:" << endl;
    cin >> wordAdverb;
    
    cout << "Enter a noun:" << endl;
    cin >> wordNounTwo;
    
    cout << endl;
    cout << "The Force is a mystical, " << wordAdjective << " power. " << endl;
    cout << "As Jedi Master Obi-Wan Kenobi once said, \"The Force is an energy field, created by all living " << wordPluralNoun << ", that surrounds us, penetrates us, and binds " << wordNoun << " together.\" " << endl;
    cout << "Using the power of the Force, a Jedi can do many " << wordAdjectiveTwo << " things, like using the Force to exercise " << wordPartOfBody << " control over " << wordAdjectiveThree << "-minded " << wordPluralNounTwo <<"."<< endl;
    cout << "A Jedi can also use the Force to move objects with his or her " << wordPartOfBodyTwo << "." << endl;
    cout << "It doesn't matter how " << wordAdjectiveFour << " these objects are, it only matters how " << wordAdverb << " the Jedi believes in the Force." << endl;
    cout << "Most importantly, the Force teaches a Jedi to rely on his or her feelings." << endl;
    cout << "As Obi-Wan Kenobi told his student, Luke " << wordNounTwo << "." << endl;
    
    return 0;
}