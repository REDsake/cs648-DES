#include <bits/stdc++.h>
using namespace std;


int main()
{
  FILE *file_output, *file_input;

  file_input = fopen("random.txt","r+");
  file_output = fopen("input_random.txt","w+");

  long long int i = 0, j= 0, k, t1,t2, temp2[64], low, X = 102;

  char temp1[64], str1[17],str2[17];

  int  s[64] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0};
  
  
  while(i < 100000)
  {
    
    fscanf(file_input,"%s",temp1);

    for(j = 0 ; j < 64 ; j++)
    {
      t1 = temp1[j]-48;
      t2 = s[j];
      
      temp2[j] =(t1^t2);

    }
    
    for(low = 0 ; low < 16 ; low++)
    {
      int high1,high2;
      high1 = (temp1[low*4]-48)*8+(temp1[low*4+1]-48)*4+(temp1[low*4+2]-48)*2+(temp1[low*4+3]-48);
      high2 = temp2[low*4]*8+temp2[low*4+1]*4+temp2[low*4+2]*2+temp2[low*4+3];

      high1 += X;
      high2 += X;

      str1[low] = high1;
      str2[low] = high2;
    }

    str2[low] = '\0',str1[low] = '\0';

    i++;

    fprintf(file_output, "%s\n",str2);
    fprintf(file_output, "%s\n",str1);
    
  }
}
