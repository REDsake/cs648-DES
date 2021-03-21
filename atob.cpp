#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

 string cal(string ch){
     string ans = "";
     for(int j =0; j<=15; j++){
         if(j%2 == 0 ) ans +='\n';
         switch(ch[j] - 'f'){
             case 0 : ans += "0000"; break;
             case 1 : ans += "0001"; break;
             case 2 : ans += "0010"; break;
             case 3 : ans += "0011"; break;
             case 4 : ans += "0100"; break;
             case 5 : ans += "0101"; break;
             case 6 : ans += "0110"; break;
             case 7 : ans += "0111"; break;
             case 8 : ans += "1000"; break;
             case 9 : ans += "1001"; break;
             case 10 : ans += "1010"; break;
             case 11 : ans += "1011"; break;
             case 12 : ans += "1100"; break;
             case 13 : ans += "1101"; break;
             case 14 : ans += "1110"; break;
             case 15 : ans += "1111"; break;

         }

         
     }
     return ans;
 } 
 int main()
 {

    char ch[100];
    string temp;
    for (int i =0; i<=15; i++){
        cin>>ch[i];
    }

    temp = cal(ch);
        char* char_arr;
        char_arr = &temp[0];
    printf("%s\n",char_arr);
    return 0;
 }