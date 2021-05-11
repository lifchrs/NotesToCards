#include <bits/stdc++.h>
using namespace std;

string input, ans; //when input is /! or ~, it indicates a new card or termination of the program

vector<pair<vector<string>,string>> cards;

void printCards(){
  ofstream cout("ankiInput.txt"); //prints to ankiInput
  for(pair<vector<string>,string> note : cards){
    ans = note.second;
    vector<string> clues = note.first;
    for(string y : clues){
      cout << y << "\t";
      cout << "<b>" << ans << "</b>"; // prints answer;
      cout << "<br>"; //new line;
      cout << "<ul>"; //start bullet points
      for (string x : clues) {
        cout << "<li>" << x << "</li>"; //print clue
      }
      cout << "</ul>"; //end bulleted list
      cout << endl; //next clue;
    }
  }
}

int main(){
  cout << "Made by Adhitya Polavaram\n\n";
  cout <<"Hi there. This is a program that I made which converts notes (it only works for bullet points to the first degree) into flashcards. Each note for a certain topic is created into a flashcard such that the front of the flashcard has the note, and the back of the flashcard has the topic the note described along with all of the other notes you have for the topic in bullet-point form. Please visit https://github.com/lifchrs/NotesToCards for more details about how the program works\n\n\n";
    bool finishProgram = 0;
    while (!finishProgram) {
        cout << "Enter an answer. If you have inputted all of the cards you would like to input, please enter \"/!\"\n";
        getline(cin, input);
        if (input == "/!")
            break;
        ans = input;
        vector<string> clues;
        cout << "Enter all of the clues. If you have finished entering all of the clues for an answer, enter into a new line, and type \"~\"\n";
        while (1) {
            getline(cin, input);
            if(input[input.size()-1] == ' '){
              input = input.substr(0,input.size()-1); //remove trailing space
            }
            if (input == "~")
                break;
            if (input == "/!") {
                finishProgram = 1;
                break;
            }
            clues.push_back(input); // then the input is the clue
        }
        if (!finishProgram) {
          cards.push_back(make_pair(clues,ans));
        }
    }
    printCards();
}
