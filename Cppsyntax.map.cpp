// Copyright 2024 Mitchell E Wise
// SPDX-License-Identifier: Apache-20

#include <functional>
#include <iostream>
#include <map>
#include <string>

void choice() {
    using namespace std;
    cout << "//Enter ch for choices.\n";
    cout << "//Enter cy for what's needed to copy and paste to finish a simple program.\n";
    cout << "//Enter s for strings.\n";
    cout << "//Enter c for empty strings.\n";
    cout << "//Enter aa for string arrays ia for numbers.\n";
    cout << "//Enter i for if statements for strings.\n";
    cout << "//Enter e for else if statements for strings.\n";
    cout << "//Enter mi for string if and else if with 2 conditions.\n";
    cout << "//Enter in for if and else if statements for numbers.\n";
    cout << "//Enter fc for void functions.\n";
    cout << "//Enter cf to call functions.\n", cout << "//Enter u for user input.\n";
    cout << "//Enter mp to start a map with one key value pair.\n";
    cout << "//Enter ma for map access.\n";
    cout << "//Enter v for string variables.\n";
    cout << "//Enter vv for string variables to assign a value.\n";
    cout << "//Enter vi for int and double variables.\n";
    cout << "//Enter vn for int and double variables with no value.\n";
}

void string() {
    std::string string[4] = {"std::cout << \"", "\\n", "\";", "\" << std::endl;"};
    std::string text;
    std::cout << "//Enter your string, m for main.\n";
    while (true) {
        std::cout << "//";
        getline(std::cin, text);
        if (text == "m") {
            break;
        }
        std::cout << "\n" << string[0] << text << string[1] << string[2] << "\n\n";
	std::cout << "\n" << string[0] << string[1] << text << string[1] << string[1] << string[2] << "\n\n";
        std::cout << "\n" << string[0] << text << string[2] << "\n\n";
        std::cout << "\n" << string[0] << text << string[3] << "\n\n";
    }
}

void estring() {
    std::string t[5] = {"std::cout << ", "\\n", "\"", " << std::endl;", ";"};
    std::string text;

    std::cout << "//Enter text m for main.\n";
    while (true) {
        std::cout << "//";
        getline(std::cin, text);
        if (text == "m") {
            break;
        }
        std::cout << "\n" << t[0] << text << t[3] << "\n\n";
    }
}

void array() {
    std::string t[5] = {"std::string ", " [", "] = {", "};"};
    std::string name;
    std::string ne;
    std::string elements;
    while (true) {
        std::cout << "//Enter the name of array m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter the amount of elements.\n";
        std::cout << "//";
        getline(std::cin, ne);
        std::cout << "//Enter elements with quotations and commas between each.\n";
        std::cout << "//";
        getline(std::cin, elements);
        std::cout << "\n" << t[0] << name << t[1] << ne << t[2] << elements << t[3] << "\n\n";
    }
}

void numArray() {
    std::string a[6] = {"int ", "double ", "[", "]", " = {", "};"};
    std::string typ;
    std::string name;
    std::string num;
    std::string elements;

    while (true) {
        std::cout << "//Enter a data type i for int d for double.\n";
        std::cout << "//";
        while (std::getline(std::cin, typ)) {
            if (typ != "i" && typ != "d") {
                std::cout << "//Enter i or d only.\n";
            } else {
                break;
            }
        }
        if (typ == "i") {
            typ = a[0];
        } else if (typ == "d") {
            typ = a[1];
        }
        std::cout << "//Enter the name of the array m for main.\n";
        std::cout << "//";
        std::getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter number of elements m for main.\n";
        std::cout << "//";
        std::getline(std::cin, num);
        std::cout << "//Enter elements with a comma between them.\n";
        std::cout << "//";
        std::getline(std::cin, elements);
        std::cout << "\n" << typ << name << a[2] << num << a[3] << a[4] << elements << a[5] << "\n\n";
    }
}

void ifstatement() {
    std::string f[4] = {"if(", " == ", "\"", ") {"};
    std::string name;
    std::string value;

    while (true) {
        std::cout << "//Enter name of the if statement m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter the value.\n";
        std::cout << "//";
        getline(std::cin, value);
        std::cout << "\n" << f[0] << name << f[1] << f[2] << value << f[2] << f[3] << "\n\n";
    }
}

void elseif() {
    std::string f[4] = {"} else if(", " == ", "\"", ") {"};
    std::string name;
    std::string value;

    while (true) {
        std::cout << "//Enter name of the else if statement m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter the value.\n";
        std::cout << "//";
        getline(std::cin, value);
        std::cout << "\n" << f[0] << name << f[1] << f[2] << value << f[2] << f[3] << "\n\n";
    }
}

void multiIf(){
    std::string t[8] ={"if(","} else if("," == ", " != ","\""," && "," || ",") {"};
    std::string select;
    std::string name;
    std::string value;
    std::string op;
    std::string compare;
    std::string sname;
    std::string svalue;
    std::string scompare;

    while (true) {
        std::cout << "//Enter i for if, e for else if.\n"; 
        while (getline(std::cin,select)) {
            if (select != "i" && select != "e") {
	        std::cout << "//Enter i or e only.\n";
            } else {
                break;
            }
        }
        if (select == "i") {
            select = t[0];
        } else if (select == "e") {
            select = t[1];
        }
	std::cout << "//Enter a name of first m for main.\n";
	std::cout << "//";
        getline(std::cin,name);
        if (name == "m") {
            break;
        }
	std::cout << "//Enter a value.\n";
	std::cout << "//";
        getline(std::cin,value);
	std::cout << "//Enter a comparison a for equal b for not equal.\n";
	std::cout << "//";
        while (getline(std::cin,compare)) {
            if (compare != "a" && compare != "b") {
	        std::cout << "//Enter a or b only.\n";
            } else {
                break;
            }
        }
        if (compare == "a") {
            compare = t[2];
        } else if (compare == "b") {
            compare = t[3];
        }
	std::cout << "//Enter a operator a for and o for or.\n";
	std::cout << "//";
        while (getline(std::cin,op)) {
            if (op !=  "a" && op != "o") {
	        std::cout << "//Enter a or o only.\n";
            } else {
                break;
            }
        }
        if (op == "a") {
            op = t[5];
        } else if (op == "o") {
            op = t[6];
        }

	std::cout << "//Enter the second name,\n";
	std::cout << "//";
        getline(std::cin,sname);
	std::cout << "Enter the second value.\n";
	std::cout << "//";
        getline(std::cin,svalue);
	std::cout << "Enter a second comparison a for equal b for not equal\n";
	std::cout << "//";
        while (getline(std::cin,scompare)) {
            if (scompare != "a" && scompare != "b") {
	        std::cout << "//Enter a or b only.\n";
            } else {
                break;
            }
        }
	if (scompare == "a") {
            scompare = t[2];
        } else if (scompare == "b") {
            scompare = t[3];
        } 
        std::cout << "\n" << select << name << compare << t[4] << value << t[4] << op << sname << scompare << t[4] << svalue << t[4] << t[7] << "\n\n";    
    }
}

void ifnum() {
    std::string t[9] = {"if(", "} else if(", " <= ", " == ", " >= ", " != ", "(", ")", ") {"};
    std::string select;
    std::string var;
    std::string op;
    std::string num;
    while (true) {
        std::cout << "//Enter i for if statement. Enter e for else if.\n";
        std::cout << "//";
        getline(std::cin, select);
        if (select != "i" && select != "e") {
            std::cout << "//Enter i or e only.\n";
            continue;
        }
        std::cout << "//Enter the name of if or else if statement  enter m for main.\n";
        getline(std::cin, var);
        if (var == "m") {
            break;
        }
        std::cout << "//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n";
        std::cout << "//";
        while (getline(std::cin, op)) {
            if (op != "a" && op != "b" && op != "c" && op != "d") {
                std::cout << "//Enter a or b or c or d only.\n";
            } else {
                break;
            }
        }
        if (op == "a") {
            op = t[2];
        } else if (op == "b") {
            op = t[3];
        } else if (op == "c") {
            op = t[4];
        } else if (op == "d") {
            op = t[5];
        }
        std::cout << "//Enter a number to compare to.\n";
        std::cout << "//";
        getline(std::cin, num);
        if (select == "i") {
            std::cout << "\n" << t[0] << var << op << num << t[8] << "\n\n";
        } else if (select == "e") {
            std::cout << "\n" << t[1] << var << op << num << t[8] << "\n\n";
        }
    }
}

void func() {
    std::string t[4] = {"void ", "(", "){", "}"};
    std::string name;
    std::string per;

    while (true) {
        std::cout << "//Name function m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter parameters.\n";
        std::cout << "//";
        getline(std::cin, per);
        std::cout << "\n" << t[0] << name << t[1] << per << t[2] << "\n\n\n" << t[3] << "\n\n";
    }
}

void callfunc() {
    std::string t[2] = {"(", ");"};
    std::string name;
    std::string per;
    while (true) {
        std::cout << "//Enter the name of function m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter values for parameters.\n";
        std::cout << "//";
        getline(std::cin, per);
        std::cout << "\n" << name << t[0] << per << t[1] << "\n\n";
    }
}

void userInput() {
    std::string f[9] = {"std::", "getline(", "std::cin", ",", ");", "std::cin >> ", ";","while(",")) {"};

    std::string v;

    while (true) {
        std::cout << "//Enter name of variable m for main.\n";
        std::cout << "//";
        getline(std::cin, v);
        if (v == "m") {
            break;
        }
        std::cout << "\n" << f[1] << f[2] << f[3] << v << f[4] << "\n\n";
        std::cout << "\n" << f[0] << f[1] << f[2] << f[3] << v << f[4] << "\n\n";
	std::cout << "\n" << f[7] << f[1] << f[2] << f[3] << v << f[8] << "\n\n";
        std::cout << "\n" << f[5] << v << f[6] << "\n\n";
        std::cout << "\nstd::cin.clear();";
        std::cout << "\nstd::cin.ignore(2000, '\\n');     //Clears input buffer.\n\n";
    }
}

void map() {
    std::string t[8] = {"std::map", "<", "std::string", "int", "double", "> ", ",", " = {"};
    std::string b[7] = {"    {", "},", "}", "};", "\"", ",", " "};
    std::string key_type;
    std::string value_type;
    std::string name;
    std::string key;
    std::string key_t;
    std::string value;
    std::string value_t;

    while (true) {
        std::cout << "//Enter the name of the map m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter a key type, s for string, i for int d for double.\n";
        std::cout << "//";
        getline(std::cin, key_type);
        if (key_type != "s" && key_type != "i" && key_type != "d") {
            std::cout << "Enter s i or d only.\n";
            continue;
        }
        if (key_type == "s") {
            key_type = t[2];
        } else if (key_type == "i") {
            key_type = t[3];
        } else if (key_type == "d") {
            key_type = t[4];
        }
        std::cout << "//Enter a value type, s for string, i for int d for double.\n";
        std::cout << "//";
        while (getline(std::cin, value_type)) {
            if (value_type != "s" && value_type != "i" && value_type != "d") {
                std::cout << "//Enter s i or d only.\n";
            } else {
                break;
            }
        }
        if (value_type == "s") {
            value_type = t[2];
        } else if (value_type == "i") {
            value_type = t[3];
        } else if (value_type == "d") {
            value_type = t[4];
        }
        std::cout << "//Enter a key.\n";
        std::cout << "//";
        getline(std::cin, key);
        std::cout << "//Enter s if key is a string.\n";
        std::cout << "//";
        getline(std::cin, key_t);
        std::cout << "//Enter a value.\n";
        std::cout << "//";
        getline(std::cin, value);
        std::cout << "//Enter s if the value is a string.\n";
        std::cout << "//";
        getline(std::cin, value_t);
        std::cout << "\n" << t[0] << t[1] << key_type << t[6] << value_type << t[5] << name << t[7] << "\n";
        if (key_t == "s") {
            std::cout << b[0] << b[4] << key << b[4] << b[5] << b[6];
        } else if (key_t != "s") {
            std::cout << b[0] << key << b[5] << b[6];
        }
        if (value_t == "s") {
            std::cout << b[4] << value << b[4] << b[1] << "\n";
        } else if (value_t != "s") {
            std::cout << value << b[1] << "\n";
        }
        std::cout << b[3] << "\n\n";
    }
}

void mapAccess() {
    std::string t[9] = {"std::cout << ", "\\n", "\"", " << std::endl;", ";", ".at(", ")", "[", "]"};
    std::string string[4] = {" std::cout << \"", "\\n", "\";}", "\" << std::endl;}"};
    std::string var;
    std::string name;
    std::string text;
    std::string em;
    while (true) {
        std::cout << "//Enter the name of the map m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//Enter the name of the variable.\n";
        std::cout << "//";
        getline(std::cin, var);
        std::cout << "To enter a key error message for exception press e.\n";
        std::cout << "//Press enter to not enter a error message.\n";
        std::cout << "//";
        getline(std::cin, em);
        if (em != "e") {
            std::cout << "\n" << t[0] << name << t[5] << var << t[6] << t[3] << "\n\n";
            std::cout << "\n" << t[0] << name << t[7] << var << t[8] << t[3] << "\n\n";
            std::cout << "\n" << name << t[5] << var << t[6] << "     // Use with try catch.\n\n";
            std::cout << "\n" << name << t[7] << var << t[8] << "\n\n";
            std::cout << "\n }" << "\n\n";
            std::cout << "\n"
                      << "try{" << "\n\n";
            std::cout << "\n"
                      << "}catch(std::out_of_range){" << "    //For map key error.\n\n";
        } else if (em == "e") {
            std::cout << "//Enter error message.\n";
            std::cout << "//";
            getline(std::cin, text);
            std::cout << "\n" << t[0] << name << t[5] << var << t[6] << t[3] << "\n\n";
            std::cout << "\n }" << "\n\n";
            std::cout << "\n"
                      << "try{" << "\n\n";
            std::cout << "}catch(std::out_of_range){" << "\n";
            std::cout << string[0] << text << string[1] << string[2] << "\n\n";
            std::cout << "}catch(std::out_of_range){" << "\n";
            std::cout << string[0] << text << string[3] << "\n\n";
        }
    }
}

void variable() {
    std::string f[2] = {"std::string ", ";"};
    std::string name;
    std::string mem;

    while (true) {
        std::cout << "//Enter name of variable m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "\n" << f[0] << name << f[1] << "\n\n";
    }
}

void variableValue() {
    std::string v[4] = {"std::string ", " = ", "\"", ";"};
    std::string name;
    std::string value;
    while (true) {
        std::cout << "//Enter a name of variable m for main.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (name == "m") {
            break;
        }
        std::cout << "//enter a value\n";
        std::cout << "//";
        getline(std::cin, value);
        std::cout << "\n" << v[0] << name << v[1] << v[2] << value << v[2] << v[3] << "\n\n";
    }
}

void variableNum() {
    std::string t[5] = {"double ", "int ", " = ", ";", " ;"};
    std::string ch;
    std::string name;
    std::string value;
    while (true) {
        std::cout << "//Choose i for int d for double, m for main.\n";
        std::cout << "//";
        getline(std::cin, ch);
        if (ch == "m") {
            break;
        } else if (ch != "i" && ch != "d") {
            std::cout << "Choose i or d or m only.\n";
            continue;
        }
        std::cout << "Enter the name.\n";
        std::cout << "//";
        getline(std::cin, name);
        std::cout << "Enter a value.\n";
        std::cout << "//";
        getline(std::cin, value);
        if (ch == "i") {
            std::cout << "\n" << t[1] << name << t[2] << value << t[3] << "\n\n";
        } else if (ch == "d") {
            std::cout << "\n" << t[0] << name << t[2] << value << t[3] << "\n\n";
        }
    }
}

void varNoValue() {
    std::string t[3] = {"double ", "int ", ";"};
    std::string ch;
    std::string name;
    while (true) {
        std::cout << "//Choose i for int d for double, m for main.\n";
        std::cout << "//";
        getline(std::cin, ch);
        if (ch == "m") {
            break;
        } else if (ch != "i" && ch != "d") {
            std::cout << "Choose i or d or m only.\n";
            continue;
        }
        std::cout << "Enter the name.\n";
        std::cout << "//";
        getline(std::cin, name);
        if (ch == "i") {
            std::cout << "\n" << t[1] << name << t[2] << "\n\n";
        } else if (ch == "d") {
            std::cout << "\n" << t[0] << name << t[2] << "\n\n";
        }
    }
}

void copy() {
    std::string cpy;
    while (true) {
        std::cout << "\n";
        std::cout << "#include <iostream>\n";
        std::cout << "\n";
        std::cout << "#include <string>\n";
        std::cout << "\n";
        std::cout << "#include <map>\n";
        std::cout << "\n";
        std::cout << "int main() {\n";
        std::cout << "\n";
        std::cout << "while(true) {\n";
        std::cout << "\n";
        std::cout << "else {\n";
        std::cout << "\n";
        std::cout << "} else {\n";
        std::cout << "\n";
        std::cout << "break;\n";
        std::cout << "\n";
        std::cout << "break;}\n";
        std::cout << "\n";
        std::cout << "continue;\n";
        std::cout << "\n";
        std::cout << "continue;}\n";
        std::cout << "\n";
        std::cout << "try {\n";
        std::cout << "\n";
        std::cout << "}catch(std::out_of_range){\n";
        std::cout << "\n";
        std::cout << "        }\n";
        std::cout << "}\n";
        std::cout << "return 0;\n";
        std::cout << "}\n";
        std::cout << "\n";
        std::cout << "//Enter m for main.\n";
        getline(std::cin, cpy);
        if (cpy == "m") {
            break;
        }
    }
}

int main() {
    std::map<std::string, std::function<void()>> f = {
        {"ch",        choice},
        {"cy",          copy}, 
        {"s",         string},
        {"c",        estring},
        {"aa",         array},
        {"ia",      numArray}, 
        {"i",    ifstatement},
        {"e",         elseif},
        {"mi",       multiIf},	
        {"in",         ifnum},
        {"fc",          func},
        {"cf",      callfunc},
        {"u",      userInput}, 
        {"mp",           map},    
        {"ma",     mapAccess}, 
        {"v",       variable},  
        {"vv", variableValue}, 
        {"vi",   variableNum}, 
        {"vn",    varNoValue},
    };

    std::string sw;
    choice();
    while (true) {
        std::cout << "//Enter a selection from choices x to exit ch for choices.\n";
        std::cout << "//";
        std::getline(std::cin, sw);
        if (sw == "x") {
            break;
        }
        auto c = f.find(sw);
        if (c != f.end()) {
            (*c).second();
        } else if (c == f.end()) {
            std::cout << "//Enter a letter in choices\n\n";
        }
    }
    return 0;
}

