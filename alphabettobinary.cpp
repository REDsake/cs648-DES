// #include <bits/stdc++.h>
// #include <string>
// #include <fstream>
// #include <iostream>
// using namespace std;

//  string cal(string ch){
//      string ans = "";
//      for(int j =0; j<16; j++){
         
//          switch(ch[j] - 'f'){
//              case 0 : ans += "0000"; break;
//              case 1 : ans += "0001"; break;
//              case 2 : ans += "0010"; break;
//              case 3 : ans += "0011"; break;
//              case 4 : ans += "0100"; break;
//              case 5 : ans += "0101"; break;
//              case 6 : ans += "0110"; break;
//              case 7 : ans += "0111"; break;
//              case 8 : ans += "1000"; break;
//              case 9 : ans += "1001"; break;
//              case 10 : ans += "1010"; break;
//              case 11 : ans += "1011"; break;
//              case 12 : ans += "1100"; break;
//              case 13 : ans += "1101"; break;
//              case 14 : ans += "1110"; break;
//              case 15 : ans += "1111"; break;
//          }
//      }
//      return ans;
//  } 


// //  string cal(string ch){
// //      string ans = "";
// //      for(int j =0; j<16; j++){
         
// //          switch(ch[j] - 'f'){
// //              case 0 : ans += "0000"; break;
// //              case 1 : ans += "0001"; break;
// //              case 2 : ans += "0010"; break;
// //              case 3 : ans += "0011"; break;
// //              case 4 : ans += "0100"; break;
// //              case 5 : ans += "0101"; break;
// //              case 6 : ans += "0110"; break;
// //              case 7 : ans += "0111"; break;
// //              case 8 : ans += "1000"; break;
// //              case 9 : ans += "1001"; break;
// //              case 10 : ans += "1010"; break;
// //              case 11 : ans += "1011"; break;
// //              case 12 : ans += "1100"; break;
// //              case 13 : ans += "1101"; break;
// //              case 14 : ans += "1110"; break;
// //              case 15 : ans += "1111"; break;
// //          }
// //      }
// //      return ans;
// //  } 
// int main()
// {   
//   char ch[100];
//   string temp;
//   FILE *fi,*fo;
//   fi = fopen("output_clean.txt","r+");
//   fo = fopen("output1.txt","w+");
//   long int i = 0;
//   while(i<200001 && fi !=NULL)
//   {
//     int flag = 0;
//     fscanf(fi,"%s",ch);
//     //if(strlen(ch) == 16)
//     //{
//       //cout << ch << "\n";
//       temp = cal(ch);
//         char* char_arr;
//         char_arr = &temp[0];
//         fprintf(fo, "%s\n",char_arr);
//         // std::ofstream out("output2.txt");
//         // out << temp << "\n";
//         //cout << "yo" ;
//         i++;
//     //}
//   }



//     // char ch[16], temp[16];
//     // FILE *fi,*fo;
//     // fi = fopen("output_clean.txt","r+");
//     // fo = fopen("output2.txt","w+");  

//     // while(fi != EOF){
//     //     fgets(ch, 16, fi);
//     //     temp = cal(ch);
//     //     fprintf(fo, "%s\n",temp);        
//     // } 
//     // FILE *fi,*fo;
//     // std::ifstream input("output_clean.txt");
//     // std::string line,ans;
//     // fo = fopen("output2.txt","w+");
//     // while( std::getline( input, line ) ) {
//     //     ans = cal(line);
//     //     fprintf(fo, "%s\n", ans);
//     // }


// //   string ch, temp;
// //   FILE *fi,*fo;
// //   fi = fopen("output_clean.txt","r+");
// //   fo = fopen("output2.txt","w+");
// //   long int i = 0;
// //   while(i < 199990)
// //   {
// //     int flag = 0;
// //     //strcpy(ch,temp);
// //     getline(fi,ch);
    
// //       //cout << ch << "\n";
// //         temp = cal(ch);
// //         fprintf(fo, "%s\n",temp);
// //         //cout << "yo" ;
// //     i++;
// //   }
// //}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char ch[16];
//     int chr[64];
//     FILE *fi, *fo;
//     fo = fopen("output1.txt", "w+");
//     fi = fopen("output_clean.txt", "r+");
//     long int i=0;
//     while(i<200000){
//         i++;
//         fscanf(fi, "%s", ch);
//         for(int j=0;j<16;j++){
//             int cur = ch[j] - 'f';
//             fprintf(fo, "%d", cur % 2);
//             cur = int(cur / 2);
//             fprintf(fo, "%d", cur % 2);
//             cur = int(cur / 2);
//             fprintf(fo, "%d", cur % 2);
//             cur = int(cur / 2);
//             fprintf(fo, "%d", cur % 2);
//         }
//         fprintf(fo,"\n");
//     }
//     return 0;
// }

// 0101 0001 0000 1101 1111 1111 0010 1111 0001 0111 0110 0011 0001 1001 0110 1000
#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

 string cal(string ch){
     string ans = "";
     for(int j =0; j<16; j++){
         
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


//  string cal(string ch){
//      string ans = "";
//      for(int j =0; j<16; j++){
         
//          switch(ch[j] - 'f'){
//              case 0 : ans += "0000"; break;
//              case 1 : ans += "0001"; break;
//              case 2 : ans += "0010"; break;
//              case 3 : ans += "0011"; break;
//              case 4 : ans += "0100"; break;
//              case 5 : ans += "0101"; break;
//              case 6 : ans += "0110"; break;
//              case 7 : ans += "0111"; break;
//              case 8 : ans += "1000"; break;
//              case 9 : ans += "1001"; break;
//              case 10 : ans += "1010"; break;
//              case 11 : ans += "1011"; break;
//              case 12 : ans += "1100"; break;
//              case 13 : ans += "1101"; break;
//              case 14 : ans += "1110"; break;
//              case 15 : ans += "1111"; break;
//          }
//      }
//      return ans;
//  } 
int main()
{   
  char ch[100];
  string temp;
  FILE *fi,*fo;
  fi = fopen("output_clean.txt","r+");
  fo = fopen("output1.txt","w+");
  long int i = 0;
  while(i<400001)
  {
    int flag = 0;
    fscanf(fi,"%s",ch);
    //if(strlen(ch) == 16)
    //{
      //cout << ch << "\n";
      temp = cal(ch);
        char* char_arr;
        char_arr = &temp[0];
        fprintf(fo, "%s\n",char_arr);
        // std::ofstream out("output2.txt");
        // out << temp << "\n";
        //cout << "yo" ;
        i++;
    //}
  }



    // char ch[16], temp[16];
    // FILE *fi,*fo;
    // fi = fopen("output_clean.txt","r+");
    // fo = fopen("output2.txt","w+");  

    // while(fi != EOF){
    //     fgets(ch, 16, fi);
    //     temp = cal(ch);
    //     fprintf(fo, "%s\n",temp);        
    // } 
    // FILE *fi,*fo;
    // std::ifstream input("output_clean.txt");
    // std::string line,ans;
    // fo = fopen("output2.txt","w+");
    // while( std::getline( input, line ) ) {
    //     ans = cal(line);
    //     fprintf(fo, "%s\n", ans);
    // }


//   string ch, temp;
//   FILE *fi,*fo;
//   fi = fopen("output_clean.txt","r+");
//   fo = fopen("output2.txt","w+");
//   long int i = 0;
//   while(i < 199990)
//   {
//     int flag = 0;
//     //strcpy(ch,temp);
//     getline(fi,ch);
    
//       //cout << ch << "\n";
//         temp = cal(ch);
//         fprintf(fo, "%s\n",temp);
//         //cout << "yo" ;
//     i++;
//   }
}
