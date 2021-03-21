#include<bits/stdc++.h>

using namespace std;


int main()
{

  char ch1[100],  ch2[100];
  int N = 400030 ,i = 0;

  FILE *file_input_pointer, *file_output_pointer;

  file_output_pointer = fopen("output_clean.txt","w+");
  file_input_pointer = fopen("output.txt","r+");

  while (i< N)
  {
    fscanf(file_input_pointer, "%s", ch1);    

    if(ch1[0]=='.')
    {

      fscanf(file_input_pointer, "%s", ch2);
      fprintf(file_output_pointer, "%s\n", ch2);

      i++;
    }

  }

  return 0;
}


