#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> parse_Table = {
    {"Te", "",  "",  "Te", "",  "" },
    {"",  "+Te", "",  "",  "0", "0"},
    {"Ft", "",  "",  "Ft", "",  "" },
    {"",  "0",  "*Ft", "",  "0", "0"},
    {"i", "",  "",  "(E)", "",  "" }
};

map<char, int> non_term_index = {{'E', 0}, {'e', 1}, {'T', 2}, {'t', 3}, {'F', 4}};
map<char, int> term_index = {{'i', 0}, {'+', 1}, {'*', 2}, {'(', 3}, {')', 4}, {'$', 5}};

void parseString(const string &input) {
    stack<char> parse_stack;
    parse_stack.push('$');
    parse_stack.push('E');

    string matched = "";
    string remain_input = input;

    cout << left << setw(20) << "Matched" << setw(20) << "Stack" << "Input" << endl;
    cout <<setw(20)<<" "<<setw(20)<<"E$"<<setw(20)<<remain_input<< endl;

    while (!parse_stack.empty()) {
        char top = parse_stack.top();
        parse_stack.pop();

        if (top == remain_input[0]) {
            matched += top;
            remain_input = remain_input.substr(1);
        } else if (non_term_index.count(top)) {
            string production = parse_Table[non_term_index[top]][term_index[remain_input[0]]];
            if (production.empty()) {
                cout << "Rejected-> No matching rule found!" << endl;
                return;
            }
            if (production != "0") {
                for (int i = production.size() - 1; i >= 0; --i) {
                    parse_stack.push(production[i]);
                }
            }
        } else {
            cout << "Rejected-> Invalid input symbol!" << endl;
            return;
        }

        string stack_content = "";
        for (stack<char> tempStack = parse_stack; !tempStack.empty(); tempStack.pop()) {
            stack_content += tempStack.top();
        }
        cout <<left<< setw(20) << matched << setw(20) << stack_content << remain_input << endl;
    }
    cout<<"Accepted"<<endl;
}

int main() {
    string input = "i+i*i$";

    cout <<"Specific input accepted by the parsing table or not"<<endl;
    parseString(input);

    return 0;
}
