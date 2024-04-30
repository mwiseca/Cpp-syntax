#Copyright 2024 Mitchell E Wise 
#SPDX-License-Identifier: Apache-20 
             
             
def choice():
    print('''
//Enter ch for choices.
//Enter cy for what's needed to copy and paste to finish a simple program.
//Enter s for strings.
//Enter c for empty strings.
//Enter aa for string arrays.
//Enter i for if statements for strings.
//Enter e for else if statements for strings.
//Enter in for if and else if statements for numbers.
//Enter fc for void functions.
//Enter cf to call functions.
//Enter u for user input.
//Enter v for string variables.
//Enter vv for string variables to assign a value.
//Enter vi for int and double variables.
//Enter vn for int and double variables with no value. ''')
    return ""


def string():
    print("// ")
    string = ['std::cout << "', "\\n",'";','"'," << std::endl;"]
    print("//Enter text m for main.")
    while True:
        text = input("//")
        if text == "m":
            return ""
        print(f"\n{string[0]}{text}{string[1]}{string[2]}\n")
        print(f"\n{string[0]}{text}{string[3]}{string[4]}\n")
             
             
def estring():
    t = ["std::cout << ",  "\\n", "\""," << std::endl;", ";"]
    print("//Enter text m for main");
    while True:
        text = input("//")
        if text == "m":
            return ""
        print("\n" + t[0] + text + t[3] + "\n\n")
             
             
def array():
    t = ["std::string "," [", "] = {","};"]
    while True:
        print("//Enter the name of array m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter the amount of elements.")
        ne = input("//")
        print("//Enter elements with quotations and commas between each.")
        elements = input("//")
        print("\n" + t[0] + name + t[1] + ne + t[2] + elements + t[3] + "\n\n")
             
             
def ifstatement():
    f = ["if(", " == ",  '"', "){"]
    while True:
        print("//Enter name of the if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//") 
        print("\n" + f[0] +  name + f[1] + f[2] + value + f[2] + f[3] + "\n\n")
    
    
def elseif():
    f = ["else if(", " == ",  '"', "){"]
    while True:
        print("//Enter name of the if statement m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter a value.")
        value = input("//") 
        print("\n" + f[0] +  name + f[1] + f[2] + value + f[2] + f[3] + "\n\n")
    
    
def ifnum():
    t = ["if(", "}else if("," <= ", " == "," >= "," != ","(",")","){"]
    while True:
        print("//Enter i for if statement. Enter e for else if.")
        select = input("//")
        if select != "i" and select != "e": 
            print("//Enter or i or e only.")
            continue
        print("//Enter the name of if or else if statement. Enter m for main.")
        var = input("//")
        if var == "m":
            return ""
        print("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal");
        while True:
            op = input("//"); 
            if op != "a" and op != "b" and op != "c" and op != "d":
                print("//Enter a or b or c or d only.") 
            else:
                break
        if op == "a":
            op = t[2]
        elif op == "b":
            op = t[3]
        elif op == "c":
            op = t[4]
        elif op == "d":
            op = t[5]
        print("//Enter a number to compare to.")
        num = input("//")
        if select == "i":
            print("\n" +  t[0] + var + op + num + t[8] +"\n")
        elif select == "e":
            print("\n" + t[1] + var + op + num + t[8] + "\n")
    
    
def func():
    while True:
        t = ["void ","(","){","}"]
        print("//Name the function m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter parameters if none just press enter.")
        per = input("//")
        print("\n" + t[0] + name + t[1] + per  + t[2])  
        print(2 *"\n")
        print(t[3] + "\n")
        
        
def callfunc():
    while True:
        t = ["(",");"]
        print("//Enter the function name m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//Enter values for parameters if any.")
        per = input("//")
        print("\n" + name + t[0] + per + t[1] + "\n")

    
def userInput():
    f = ["std::","getline(","std::cin", ",", ");","std::cin >> ",";"]  
    while True:
        print("//Enter name of variable m for main.")
        v = input("//")
        if v == "m":
            return ""
        print("\n" + f[1] + f[2] + f[3] + v + f[4] + "\n\n")
        print("\n" + f[0] + f[1] + f[2] + f[3]  + v + f[4] + "\n\n")
        print("\n" + f[5] +  v + f[6]  + "\n\n")
        print("\nstd::cin.clear();")
        print("std::cin.ignore(2000, '\\n');     //Clears input buffer.\n")
    
    
def variable():
    f = ["std::string ",";"]	
    while True:
        print("//Enter name of variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("\n" + f[0] + name + f[1] + "\n")
        
        
def variableValue():    
    t = ["std::string "," = ","\"",";"]
    while True:
        print("//Enter a name of variable m for main.")
        name = input("//")
        if name == "m":
            return ""
        print("//enter a value\n")
        value = input("//")
        print("\n" + t[0] + name + t[1] + t[2] + value + t[2] + t[3] + "\n")


def variableNum():
    t = ["double ","int "," = ", ";", " ;"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            print("Enter i,d or m only.")
            continue
        print("//Enter the name.")
        name = input("//")
        print("//Enter a value.")
        value = input("//")
        if ch == "i":
            print("\n" + t[1] + name + t[2] + value + t[3] + "\n")
        elif ch == "d":
            print("\n" + t[0] +name + t[2] + value + t[3] + "\n")
    
    
def varNoValue():
    t = ["double ","int ", ";"]
    while True:
        print("//Choose i for int d for double, m for main.")
        ch = input("//")
        if ch == "m":
            return ""
        elif ch != "i" and ch != "d":
            print("Enter i or d only.")
            continue
        print("//Enter the name.")
        name = input("//")
        if ch == "i":
            print("\n" + t[1]+name+t[2] + "\n")
        elif ch == "d":
            print("\n" + t[0]+name+t[2] + "\n")


def copy():
    while True:
        print("\n")
        print("#include <iostream>")
        print("\n")
        print("#include <string>")
        print("\n")
        print("int main(){")
        print("\n")
        print("while(true){")
        print("\n")
        print("else{")
        print("\n")
        print("}else{")
        print("\n")
        print("break;")
        print("\n")
        print("break;}")
        print("\n")
        print("continue;")
        print("\n")
        print("continue;}")
        print("\n")
        print("        }")
        print("}")
        print("return 0;")
        print("}")
        print("\n")
        print("//Enter m for main.")
        cpy = input("//")
        if cpy == "m":
            return ""
        
        
functions = {
    "ch": choice,
    "s": string,
    "c": estring,
    "aa": array,
    "i": ifstatement,
    "e": elseif,
    "in": ifnum,
    "fc": func,
    "cf": callfunc,
    "u": userInput,
    "v": variable,
    "vv": variableValue,
    "vi": variableNum,
    "vn": varNoValue,
    "cy": copy
}

choice()
while True:
    try:
        print("//Enter x for exit m for main ch for choices.")
        switch = input("//")
        if switch == "x":
            break
        print(functions[switch]())
    except KeyError:
        print("Enter a letter in choices.\n")