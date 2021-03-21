#define LLI long long int

#include <bits/stdc++.h>


using namespace std;


int main()
{
  int S[8][64]=
  {
    14, 4, 13, 1, 2, 15, 11, 8, 3 , 10, 6, 12, 5, 9, 0, 7,
    0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
    4, 1 , 14, 8, 13, 6, 2, 11, 15, 12, 9, 7,3, 10, 5, 0,
    15, 12, 8,2,4, 9, 1,7 , 5, 11, 3, 14, 10, 0, 6, 13 ,

    15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0,5, 10,
    3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
    0, 14, 7, 11, 10, 4, 13, 1, 5, 8,12, 6, 9, 3, 2, 15,
    13, 8, 10, 1, 3, 15, 4, 2,11,6, 7, 12, 0,5, 14, 9,

    10, 0, 9,14,6,3,15,5, 1, 13, 12, 7, 11, 4,2,8,
    13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
    13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12,5, 10, 14, 7,
    1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12,

    7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
    13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
    10, 6, 9, 0, 12, 11, 7, 13, 15, 1 , 3, 14, 5, 2, 8, 4,
    3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14,

    2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,
    14, 11,2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
    4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,
    11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3,

    12, 1, 10, 15, 9, 2, 6,8, 0, 13, 3, 4, 14, 7, 5, 11,
    10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
    9, 14, 15, 5, 2,8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,
    4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13,

    4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
    13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
    1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,
    6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12,

    13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12,7,
    1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
    7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,
    2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11
    };


    LLI xor_of_a, xor_of_b, a1, a2, s_a1, s_a2,gamma, k[8][64], i, j;
    
    for ( i = 0; i < 8; ++i)
    {
      for( j = 0 ; j < 64 ; ++j)
        k[i][j] = 0;
    }
    
    FILE *fun_of_xor_of_a, *fun_of_xor_of_b, *file_open, *fun_of_gamma, *file_open_key;
    
    fun_of_gamma = fopen("gamma.txt", "r+");
    fun_of_xor_of_a = fopen("alphaxor.txt","r+");
    fun_of_xor_of_b = fopen("betaxor.txt","r+");

    file_open = fopen("a1a2.txt","w+");
    file_open_key = fopen("key.txt","w+");

    long int idx = 0;
    
    char var1[64],var2[64],var3[64];
    
    while(idx <= 65430)
    {
      idx++;
      fscanf(fun_of_xor_of_b,"%s",var1);
      fscanf(fun_of_xor_of_a,"%s",var2);
      fscanf(fun_of_gamma,"%s",var3);
      

      LLI t1=(LLI) strtoll(var1,(char **)NULL,2);
      LLI t2=(LLI) strtoll(var2,(char **)NULL,2);
      LLI t3=(LLI) strtoll(var3,(char **)NULL,2);

      xor_of_b = t1;
      xor_of_a = t2;
      gamma = t3;

      fprintf(file_open, "%lld %lld\n",xor_of_a, xor_of_b);
      
      for( j = 0 ; j < 8 ; j++)
      {
        LLI var_of_a,var_of_b,var_of_g;

        var_of_a = xor_of_a/(LLI)(powf(2,6*(7-j)));
        var_of_b = xor_of_b/(LLI)(powf(2,4*(7-j)));

        var_of_g = gamma/(LLI)(powf(2,6*(7-j)));
        
        for (int i = 0; i < 64; ++i)
        {

          a2 = i^var_of_a;
          a1 = i;
          s_a1 = S[j][(16*(2*(a1/32)+a1%2))+(a1/2)%16];
          s_a2 = S[j][(16*(2*(a2/32)+a2%2))+(a2/2)%16];


          if((s_a2^s_a1) == var_of_b)
          {
            
            k[j][a1^var_of_g] += 1;
            
            fprintf(file_open, "%lld %lld |||| ",a1,s_a1);
            fprintf(file_open, "%lld %lld\n",a2,s_a2);
            
          }
        }
        
        fprintf(file_open, "^^^^^^^^^^^K[%d]^^^^^^^^^ \n",j+1);


        xor_of_a = xor_of_a%(LLI)(powf(2,6*(7-j)));
        xor_of_b = xor_of_b%(LLI)(powf(2,4*(7-j)));
        
        gamma = gamma%(LLI)(powf(2,6*(7-j)));
      }

    }

    
    for ( i = 0; i < 8; ++i)
    {
      for( j = 0 ; j < 64 ; ++j)
        fprintf(file_open_key, "%d = %lld\n",j,k[i][j]);

      
      fprintf(file_open_key, "---------------------------------\n");

    }

    return 0;
}
