#include <bits/stdc++.h>

using namespace std;

time_t time;

int main()
{
  int N = 64;
  char arr[N];
  long long int x,j=0, i = 0;

  FILE *file;


  file = fopen("random.txt","w+");

  while(j < 100000)
  {

    for (i = 0; i < N; i++)
    {

      x = rand()%2;
      x += 48;
      arr[i] = x;

    }
    

    for (int i = 0; i < N; i++)
      fprintf(file, "%c", arr[i]);


    fprintf(file, "\n");
    j++;
  }

}
