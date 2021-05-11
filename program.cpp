#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double; // or double, if TL is tight
using str = string; // yay python!

using pl = pair<ll, ll>;
using pd = pair<ld, ld>;

using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vpl = vector<pl>;
using vpd = vector<pd>;

// pairs
#define mp make_pair
#define f first
#define s second

#define sz(x) (ll)((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front

#define lb lower_bound
#define ub upper_bound

#define F0R(i, a) for (ll i = 0; i < a; i++)
#define FOR(i, a, b) for (ll i = a; i < b; i++)

#define nn << "\n"

str input, ans; //when input is /! or ~, it indicates a new card or termination of the program

vector<pair<vs,str> > cards;


void printCards()
{
  ofstream cout("ankiInput.txt"); //prints to ankiInput
  for(pair<vs,str> note : cards){
    ans = note.s;
    vs clues = note.f;
  for(str y : clues){
    cout << y << "\t";
    cout << "<b>" << ans << "</b>"; // prints answer;
    cout << "<br>"; //new line;
    cout << "<ul>"; //start bullet points
    for (str x : clues) {
        cout << "<li>" << x << "</li>"; //print clue
    }
    cout << "</ul>"; //end bulleted list
    cout nn; //next clue;
  }
}
}


int main()
{
  cout << "Made by Adhitya Polavaram" nn nn;
  cout <<"Hi there. This is a program that I made which converts notes (it only works for bullet points to the first degree) into flashcards. Each note for a certain topic is created into a flashcard such that the front of the flashcard has the note, and the back of the flashcard has the topic the note described along with all of the other notes you have for the topic in bullet-point form." nn nn nn;
    cout << "To use this program, first type the answer line then type each of the clues, with each clue being separated by a new line. You can copy paste text into terminal by doing Ctrl + shift + v. Type \"~\" (without the quotation marks) to finish inputting clues for a certain answer. Repeat this for all of your topics. Once you have entered all of the cards that you would like to create, write \"/!\" (once again, without quotes) for the program to finish. You will see that a file named \"ankiInput.txt\" will be in the directory that you ran the program in. Each time you use this program, the file will be over-written" nn;

    cout << "Further tip: If your notes are already written in a way such that you have the topic as the first line and ";
    bool finishProgram = 0;
    while (!finishProgram) {
        cout << "Enter an answer. If you are done " nn;
        getline(cin, input);
        if (input == "/!")
            break;
        ans = input;
        vs clues;
        cout << "Enter all of the clues. If you have finished entering all of the clues for an answer, enter into a new line, and type \"~\"" nn;
        while (1) {
            getline(cin, input);
            if(input[sz(input)-1] == ' '){
              input = input.substr(0,sz(input)-1); //remove trailing space
            }
            if (input == "~")
                break;
            if (input == "/!") {
                finishProgram = 1;
                break;
            }
            clues.pb(input); // then the input is the clue
        }
        if (!finishProgram) {
          cards.pb(mp(clues,ans));
        }
    }
    printCards();
}
