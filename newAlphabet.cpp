#include<bits/stdc++.h>

using namespace std;

int main() {
    string word;
    char letter;
    while (cin >> word) {
        for (int i = 0; i < word.size(); i++) {
            letter = word[i];
            letter = toupper(letter);
            switch (letter) {
                case 'A': cout << "@";      break;
                case 'B': cout << "8";      break;
                case 'C': cout << "(";      break;
                case 'D': cout << "|)";     break;
                case 'E': cout << "3";      break;
                case 'F': cout << "#";      break;
                case 'G': cout << "6";      break;
                case 'H': cout << "[-]";    break;
                case 'I': cout << "|";      break;
                case 'J': cout << "_|";     break;
                case 'K': cout << "|<";     break;
                case 'L': cout << "1";      break;
                case 'M': cout << "[]\\/[]"; break;
                case 'N': cout << "[]\\[]";  break;
                case 'O': cout << "0";      break;
                case 'P': cout << "|D";     break;
                case 'Q': cout << "(,)";    break;
                case 'R': cout << "|Z";     break;
                case 'S': cout << "$";      break;
                case 'T': cout << "']['";   break;
                case 'U': cout << "|_|";    break;
                case 'V': cout << "\\/";     break;
                case 'W': cout << "\\/\\/";   break;
                case 'X': cout << "}{";     break;
                case 'Y': cout << "`/";     break;
                case 'Z': cout << "2";      break;
                default:  cout << letter;
            }
        }
    cout << " ";
    }
    cout << endl;
}
