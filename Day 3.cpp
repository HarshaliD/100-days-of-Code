//Problem statement 6
//Reverse string word wise

#include <iostream>
#include <sstream>
using namespace std;

string reverseStringWordWise(string input)
{   
    std::istringstream iss(input);
    std::string currentWord;
    std::string reversedString;

    while (iss >> currentWord) {
        // Append reversed words to the result string
        reversedString = currentWord + " " + reversedString;
    }

    // Remove the trailing space at the end
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Problem Statement 7
//Encode the message

#include <bits/stdc++.h> 
string encode(string &message)
{   
    int i=0;
    string text;
    while (i != message.size()) {
        int j = i;
        int count = 1;

        while (j + 1 < message.size() && message[i] == message[j + 1]) {
            j++;
            count++;
        }

        text += message[i] + std::to_string(count);
        i = j + 1;
    }

    return text;
}


#method 2
#include <bits/stdc++.h> 
string encode(string &message) {
    string output;
    output += message[0];  // Add the first character of the input string to the output
    int count = 1;  // Initialize count to 1 for the first character

    for (int i = 0; i < message.size() - 1; i++) {
        if (message[i] != message[i + 1]) {
            // If the current character is different from the next one
            output += to_string(count);  // Add the count of the current character to the output
            output += message[i + 1];  // Add the next character to the output
            count = 1;  // Reset the count for the new character
        } else {
            // If the current character is the same as the next one
            count++;  // Increment the count
        }
    }

    // Add the count for the last character after the loop ends
    output += to_string(count);

    return output;
}

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Problem statement 8
//Minimum Paranthesis

#include <bits/stdc++.h>
#include <cmath> 
int minimumParentheses(string pattern) {
    int countOpen = 0;
    int countClose = 0;

    for (char ch : pattern) {
        if (ch == '(') {
            countOpen++;
        } else if (ch == ')') {
            if (countOpen > 0) {
                // If an open parenthesis is available, pair it with a close parenthesis
                countOpen--;
            } else {
                // If no open parenthesis is available, an extra close parenthesis is needed
                countClose++;
            }
        }
    }

    // The total number of parentheses needed is the sum of remaining open and close parentheses
    return countOpen + countClose;
}
