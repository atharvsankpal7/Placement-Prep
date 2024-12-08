#include <bits/stdc++.h>
using namespace std;
string sortWords(){
    string str;
    getline(cin ,str);
    set<string> words;
    string word = "";
    for (char c : str)
    {
        if (c == ' ')
        {
            words.insert(word);
            word = "";
            continue;

        }
        word += c;
    }
    words.insert(word);
    string solution = "";
    for (auto word : words)
    {
        solution += word;
        solution += ' ';
    }
    cout << solution;
    return solution;
}
string reverseWords(){
    string str;
    getline(cin ,str);
    deque<string> words;
    string word = "";
    for (char c : str)
    {
        if (c == ' ')
        {
            words.push_front(word);
            word = "";
            continue;

        }
        word += c;
    }
    words.push_front(word);
    
    string solution = "";
    for (auto word : words)
    {
        solution += word;
        solution += ' ';
    }
    cout << solution;
    return solution;
}
int main()
{
    reverseWords();
    return 0;
}