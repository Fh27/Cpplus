#include <iostream>
using namespace std;


void removeSpaces(char *str ){
    int cnt=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
        str[cnt]=str[i];
        cnt++;
        }
    }
        str[cnt]='\0';
}

int main()
{
     char str[] = "g  eeks   for ge  eeks  ";
    removeSpaces(str);
    cout << str;
    

    return 0;
}
