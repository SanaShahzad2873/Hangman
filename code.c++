#include <iostream>
using namespace std;

int main() {
    // fixed word
    string word = "apple";
    string guessed = "_____";

    int attempts = 6;
    char guess;

    cout << "===== HANGMAN GAME =====" << endl;

    // game loop
    while (attempts > 0 && guessed != word) {
        cout << "\nWord: " << guessed << endl;
        cout << "Attempts left: " << attempts << endl;

        cout << "Enter a letter: ";
        cin >> guess;

        bool found = false;

        // check letter
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                found = true;
            }
        }

        if (found) {
            cout << "Correct guess!" << endl;
        } else {
            cout << "Wrong guess!" << endl;
            attempts--;
        }
    }

    // result
    if (guessed == word) {
        cout << "\n🎉 You WON! Word was: " << word << endl;
    } else {
        cout << "\n💀 You LOST! Word was: " << word << endl;
    }

    return 0;
}