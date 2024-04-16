//Copyright 2024 Mitchell E Wise
//SPDX-License-Identifier: Apache-20


#include <stdio.h>
#include <string.h>


void choice(){
printf("Enter ch for choices.\n");
printf("//Enter cy for what's needed to copy and paste to finish a simple program.\n");
printf("//Enter s for strings.\n");
printf("//Enter c for empty strings.\n");
printf("//Enter aa for string arrays.\n");
printf("//Enter i for if statements for strings.\n");
printf("//Enter e for else if statements for strings.\n");
printf("//Enter in for if and else if statements for numbers.\n");
printf("//Enter fc for void functions.\n");
printf("//Enter cf to call functions.\n");
printf("//Enter u for user input.\n");
printf("//Enter mp to start a map with one key value pair.\n");
printf("//Enter ma for map access.\n");
printf("//Enter v for string variables.\n");
printf("//Enter vv for string variables to assign a value.\n");
printf("//Enter vi for int and double variables.\n");
printf("//Enter vn for int and double variables with no value.\n");
}

int main(){
         char sw [250];


choice();
 while(1){
 printf("//Enter x to exit main m for main ch for choices.\n");
 printf("//");
 fgets(sw,250,stdin);
 sw[strcspn(sw,"\n")]=0;
  if(strcmp(sw,"s")==0){
  char string [4] [20] = {"std::cout << \"", "\\n","\";","\" << std::endl;"};
  char text [2000];
  printf("//Enter your string, m for main.\n");
  while(1){
  printf("//");
  fgets(text,2000,stdin);
  text[strcspn(text,"\n")]=0;
  if(strcmp(text,"m")==0){
  break;}
  printf("\n%s%s%s%s\n\n", string[0] , text , string[1] , string[2]);
  printf("\n%s%s%s\n\n", string[0] , text , string[3]);
  }
}else if(strcmp(sw,"c")==0){ 
    char t [5]  [20] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";"};
    char text [2000];
    
 printf("//Enter text m for main.\n");   
 while(1){
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 if(strcmp(text,"m")==0){
 break;}
 printf("\n%s%s%s\n\n", t[0] , text , t[3]); 
 } 
}else if(strcmp(sw, "aa")==0){
	char t [4]  [20] = {"std::string "," [", "] = {","};"};
        char name [2000];
	char ne [2000];
	char elements [2000];
 while(1){
 printf("//Enter the name of array m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter the amount of elements.\n");
 printf("//");
 fgets(ne,2000,stdin);
 ne[strcspn(ne,"\n")]=0;
 printf("//Enter elements with quotations and commas between each.\n");
 printf("//");
 fgets(elements,2000,stdin);
 elements[strcspn(elements,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", t[0] , name , t[1] , ne , t[2] , elements , t[3]);
 }
}else if(strcmp(sw,"i")==0){
         char f  [4] [15] = {"if(", " == ",  "\"", "){"};
   	 char name [2000];
         char value [2000];
 
 while(1){
 printf("//Enter name of the if statement m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",f[0] , name , f[1] , f[2] , value , f[2] , f[3]);       
 }
}else if(strcmp(sw,"e")==0){
         char f  [4] [15] = {"}else if(", " == ",  "\"", "){"};
   	 char name [2000];
         char value [2000];
 
 while(1){
 printf("//Enter name of the else if statement m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter the value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n",f[0] , name , f[1] , f[2] , value , f[2] , f[3]);       
 }
}else if(strcmp(sw,"in")==0){
      char t [9] [20] = {"if(", "}else if("," <= ", " == "," >= "," != ","(",")","){"};
       char select [1000];
       char var [2000];
       char op [1000];
       char num [1000];
 while(1){
 printf("//Enter i for if statement. Enter e for else if.\n");
 printf("//");
 fgets(select,1000,stdin);
 select[strcspn(select,"\n")]=0;
 if(strcmp(select,"i")!=0 && strcmp(select,"e")!=0){  
 printf("//Enter i or e only.\n");
 continue;}
 printf("//Enter the name of if or else if statement  enter m for main.\n");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 if(strcmp(var,"m")==0){
 break;} 
 printf("//Enter an operator, a for less than, b for equal to, c for greater than, d for not equal\n");
 printf("//");
 while(fgets(op,1000,stdin)){
       op[strcspn(op,"\n")]=0;
 if(strcmp(op,"a")!=0 && strcmp(op,"b")!=0 && strcmp(op,"c")!=0 && strcmp(op,"d")!=0){
 printf("//Enter a or b or c or d only.\n");}
 else{
     break;}
 }
 if(strcmp(op,"a")==0){
  strcpy(op,t[2]);
}else if(strcmp(op,"b")==0){
  strcpy(op,t[3]);
}else if(strcmp(op,"c")==0){
 strcpy(op,t[4]);
}else if(strcmp(op,"d")==0){
 strcpy(op,t[5]);}
 printf("//Enter a number to compare to.\n");
 printf("//");
 fgets(num,1000,stdin);
 num[strcspn(num,"\n")]=0;
  if(strcmp(select,"i")==0){
  printf("\n%s%s%s%s%s\n\n",t[0],var,op,num,t[8]);
 }else if(strcmp(select,"e")==0){
  printf("\n%s%s%s%s%s\n\n",t[1],var,op,num,t[8]);
    }
 }
}else if(strcmp(sw,"fc")==0){
      char t [4] [12] = {"void ","(","){","}"};
      char name [2000];
      char per [2000];
 
 while(1){
 printf("//Name function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s%s\n\n\n%s\n\n",t[0],name,t[1],per,t[2],t[3]); 
 } 
}else if(strcmp(sw,"cf")==0){
      char t [2] [12] = {"(",");"};
      char name [2000];
      char per [2000];
 while(1){
 printf("//Enter the name of function m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter values for parameters.\n");
 printf("//");
 fgets(per,2000,stdin);
 per[strcspn(per,"\n")]=0;
 printf("\n%s%s%s%s\n\n",name,t[0],per,t[1]);
 }
}else if(strcmp(sw,"u")==0){
        char f  [7] [20] = {"std::","getline(","std::cin", ",", ");","std::cin >> ",";"};
        char v [2000];
  
   while (1){
   printf("//Enter name of variable m for main.\n");
   printf("//");
   fgets(v,2000,stdin);
   v[strcspn(v,"\n")]=0;
   if(strcmp(v,"m")==0){
   break;}
   printf("\n%s%s%s%s%s\n\n", f[1] , f[2] , f[3] , v , f[4]);
   printf("\n%s%s%s%s%s%s\n\n",f[0] , f[1] , f[2] , f[3] , v , f[4]);
   printf("\n%s%s%s\n\n", f[5] , v , f[6]);
   printf("\nstd::cin.clear();");
   printf("\nstd::cin.ignore(2000, '\\n');     //Clears input buffer.\n\n");
   }
}else if(strcmp(sw,"v")==0){
     char f  [2] [20] = {"std::string ",";"};
     char name [2000];
     char mem [2000];
    	
 while (1){
 printf("//Enter name of variable m for main.\n");
 printf("//"); 
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0; 
 if(strcmp(name,"m")==0){
 break;}
 printf("\n%s%s%s\n\n", f[0] , name , f[1]);
    }
}else if(strcmp(sw,"vv")==0){
       char v [4] [20] = {"std::string "," = ","\"",";"};
       char name [2000];
       char value [2000];
 while(1){
 printf("//Enter a name of variable m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//enter a value\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("\n%s%s%s%s%s%s%s\n\n", v[0] , name , v[1] ,  v[2] , value , v[2] , v[3]);
 }
}else if(strcmp(sw, "mp")==0){ 
  char t [8] [20] = {"std::map","<","std::string","int","double","> ",",", " = {"};
 char b [7]  [15] = {"    {", "}," , "}", "};", "\"", ","," "};
                 char key_type [2000];
		 char value_type [2000];
		 char name [2000];
		 char key [2000];
		 char key_t [2000];
		 char value [2000];
		 char value_t [2000];
		 
 while(1){
 printf("//Enter the name of the map m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name,"m")==0){
 break;}
 printf("//Enter a key type, s for string, i for int d for double.\n");
 printf("//");
 fgets(key_type,2000,stdin);
 key_type[strcspn(key_type,"\n")]=0;
if(strcmp(key_type,"s")!=0 && strcmp(key_type,"i")!=0 && strcmp(key_type, "d")!=0){
 printf("Enter s i or d only.\n");
 continue;}
 if(strcmp(key_type,"s")==0){
 strcpy(key_type,t[2]);
}else if(strcmp(key_type, "i")==0){
 strcpy(key_type,t[3]);
}else if(strcmp(key_type,"d")==0){
 strcpy(key_type,t[4]);}
 printf("//Enter a value type, s for string, i for int d for double.\n");
 printf("//");
 while(fgets(value_type,2000,stdin)){
       value_type[strcspn(value_type,"\n")]=0;
 if(strcmp(value_type,"s")!=0 && strcmp(value_type, "i")!=0 && strcmp(value_type, "d")!=0){
 printf("//Enter s i or d only.\n");}
 else{
     break;}
 }
 if(strcmp(value_type,"s")==0){
 strcpy(value_type,t[2]);
}else if(strcmp(value_type,"i")==0){
 strcpy(value_type,t[3]);
}else if(strcmp(value_type,"d")==0){
 strcpy(value_type,t[4]);}
 printf("//Enter a key.\n");
 printf("//");
 fgets(key,2000,stdin);
 key[strcspn(key,"\n")]=0;
 printf("//Enter s if key is a string.\n");
 printf("//");
 fgets(key_t,2000,stdin);
 key_t[strcspn(key_t,"\n")]=0; 
 printf("//Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0;
 printf("//Enter s if the value is a string.\n");
 printf("//");
 fgets(value_t,2000,stdin);
 value_t[strcspn(value_t, "\n")]=0;
 printf("\n%s%s%s%s%s%s%s%s\n",t[0], t[1], key_type, t[6], value_type , t[5] , name, t[7]);  
 if(strcmp(key_t, "s")==0){
 printf("%s%s%s%s%s%s", b[0] , b[4] , key , b[4] , b[5] ,  b[6]);
}else if(strcmp(key_t,"s")!=0){
 printf("%s%s%s%s", b[0] , key , b[5], b[6]);}
 if(strcmp(value_t, "s")==0){
 printf("%s%s%s%s\n", b[4] , value , b[4] , b[1]);
}else if(strcmp(value_t,"s")!=0){
 printf("%s%s\n", value , b[1]);}
 printf("%s\n\n", b[3]);
 }
}else if(strcmp(sw, "ma")==0){
   char t [9][20] = {"std::cout << ",  "\\n", "\""," << std::endl;", ";", ".at(", ")","[","]"};
  char string [4] [20] = {" std::cout << \"", "\\n","\";}","\" << std::endl;}"};
             char var [2000];
	     char name [2000];
             char text [2000];
	     char em [2000];
 while(1){
 printf("//Enter the name of the map m for main.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 if(strcmp(name, "m")==0){
 break;}
 printf("//Enter the name of the variable.\n");
 printf("//");
 fgets(var,2000,stdin);
 var[strcspn(var,"\n")]=0;
 printf("To enter a key error message for exception press e.\n");
 printf("//Press enter to not enter a error message.\n");
 printf("//");
 fgets(em,2000,stdin);
 em[strcspn(em,"\n")]=0;
 if(strcmp(em, "e")!=0){ 
 printf("\n%s%s%s%s%s%s\n\n" , t[0] , name , t[5] , var, t[6] , t[3]);
 printf("\n%s%s%s%s%s%s\n\n", t[0] , name , t[7] , var , t[8], t[3]);
 printf("\n%s%s%s%s      //Use with try catch.\n\n",  name , t[5] , var ,t[6]);
 printf("\n%s%s%s%s\n\n", name , t[7] , var , t[8]);
 printf("\n } \n\n");
 printf("\ntry{ \n\n");
 printf("\n }catch(std::out_of_range){      //For map key error.\n\n"); 
 }else if(strcmp(em, "e")==0){
 printf("//Enter error message.\n");
 printf("//");
 fgets(text,2000,stdin);
 text[strcspn(text,"\n")]=0;
 printf("\n%s%s%s%s%s%s\n\n", t[0] , name , t[5] ,var ,t[6] , t[3]);
 printf("\n}\n\n");
 printf("\ntry{\n\n");
 printf("}catch(std::out_of_range){\n");  
 printf("%s%s%s%s\n\n",string[0] , text , string[1] , string[2]);
 printf("}catch(std::out_of_range){\n");  
 printf("%s%s%s\n\n", string[0] ,  text , string[3]);
     }
}  
}else if(strcmp(sw,"vi")==0){
        char t [5] [15] = {"double ","int "," = ", ";", " ;"};
        char ch [2000];
        char name [2000];
        char value [2000];
 while(1){
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0;
 printf("Enter a value.\n");
 printf("//");
 fgets(value,2000,stdin);
 value[strcspn(value,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s%s%s\n\n",t[1],name,t[2],value,t[3]); 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s%s%s\n\n",t[0],name,t[2],value,t[3]);
       }
}
}else if(strcmp(sw,"vn")==0){
        char t [3] [15] = {"double ","int ", ";"};
        char ch [2000];
        char name [2000];
 while(1){
 printf("//Choose i for int d for double, m for main.\n");
 printf("//");
 fgets(ch,2000,stdin);
 ch[strcspn(ch,"\n")]=0;
 if(strcmp(ch,"m")==0){
 break;}
 else if(strcmp(ch, "i")!=0 && strcmp(ch, "d")!=0){
 printf("Choose i or d or m only.\n");
 continue;}
 printf("Enter the name.\n");
 printf("//");
 fgets(name,2000,stdin);
 name[strcspn(name,"\n")]=0; 
 if(strcmp(ch,"i")==0){
 printf("\n%s%s%s\n\n",t[1],name,t[2]); 
}else if(strcmp(ch,"d")==0){
 printf("\n%s%s%s\n\n",t[0],name,t[2]);
      }
}
}else if(strcmp(sw, "cy")==0){
 char cpy [2000];
 while(1){
 printf("\n");
 printf("#include <iostream>\n");
 printf("\n");
 printf("#include <string>\n");
 printf("\n");
 printf("#include <map>\n");
 printf("\n"); 
 printf("int main(){\n");
 printf("\n");
 printf("while(true){\n");
 printf("\n");
 printf("else{\n");
 printf("\n");
 printf("}else{\n");
 printf("\n");
 printf("break;\n");
 printf("\n");
 printf("break;}\n");
 printf("\n");
 printf("continue;\n");
 printf("\n");
 printf("continue;}\n");
 printf("\n");
 printf("try{\n");
 printf("\n");
 printf("}catch(std::out_of_range){\n");
 printf("\n");
 printf("        }\n");
 printf("}\n");
 printf("return 0;\n");
 printf("}\n");
 printf("\n");
 printf("//Enter m for main.\n");
 fgets(cpy,2000,stdin);
 cpy[strcspn(cpy,"\n")]=0;
 if(strcmp(cpy,"m")==0){
 break;}
     }
}else if(strcmp(sw, "x")==0){
 break;
}else if(strcmp(sw, "ch")==0){
 choice();
}else{
      printf("//Enter a letter in main.\n");
         }
      }
return 0;
}











