#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>


using namespace std;

int main()
{

    ofstream output_file1, output_file2, output_file3;
    ifstream input_file1, input_file2;
    int k, i, j, l;
    int a[8][8], b[8][8], c[8][8], d[8][8], e[8][8], f[8][6], g[8][4], h, m, n, o;

    int ex[8][6] = {
        32, 1, 2, 3, 4, 5,
        4, 5, 6, 7, 8, 9,
        8, 9, 10, 11, 12, 13,
        12, 13, 14, 15, 16, 17,
        16, 17, 18, 19, 20, 21,
        20, 21, 22, 23, 24, 25,
        24, 25, 26, 27, 28, 29,
        28, 29, 30, 31, 32, 1};



    int invrfp[8][8] = {
        57, 49, 41, 33, 25, 17, 9, 1,
        59, 51, 43, 35, 27, 19, 11, 3,
        61, 53, 45, 37, 29, 21, 13, 5,
        63, 55, 47, 39, 31, 23, 15, 7,
        58, 50, 42, 34, 26, 18, 10, 2,
        60, 52, 44, 36, 28, 20, 12, 4,
        62, 54, 46, 38, 30, 22, 14, 6,
        64, 56, 48, 40, 32, 24, 16, 8};
    

    int invp[8][4] = { 9, 17, 23, 31, 13, 28, 2, 18, 24, 16, 30, 6, 26, 20, 10, 1, 8, 14, 25, 3, 4, 29, 11, 19, 32, 12, 22, 7, 5, 27, 15, 21,};

    input_file2.open("output1.txt");
    output_file1.open("alphaxor.txt");
    output_file2.open("betaxor.txt");
    output_file3.open("reverse.txt");
    
    string str1, str2;

    while (getline(input_file2, str1))
    {
        getline(input_file2, str2);
        k = 0;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                a[i][j] = str1[k] - 48;
                k++;
            }
        }



        k = 0;

        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                b[i][j] = str2[k] - 48;
                k++;
            }
        }



        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                k = (invrfp[i][j] - 1) / 8;
                l = (invrfp[i][j] - 1) % 8;
                c[i][j] = a[k][l];
                output_file3 << c[i][j];
            }
        }



        output_file3 << '\n';


        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                k = (invrfp[i][j] - 1) / 8;
                l = (invrfp[i][j] - 1) % 8;

                d[i][j] = b[k][l];
                
                output_file3 << d[i][j];
            }
        }


        output_file3 << '\n';

        for (i = 0; i < 8; i++)
            for (j = 0; j < 8; j++)
                e[i][j] = c[i][j] ^ d[i][j];


        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 6; j++)
            {
                k = (ex[i][j] - 1) / 8;
                l = (ex[i][j] - 1) % 8;

                h = e[k][l];

                output_file1 << h;
            }
        }


        output_file1 << '\n';
        e[4][5] = e[4][5] ^ 1;


        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
            {
                k = (invp[i][j] - 1) / 8;
                l = (invp[i][j] - 1) % 8;
                g[i][j] = e[k + 4][l];
                output_file2 << g[i][j];
            }
        }
        output_file2 << '\n';
    }
    
    output_file1.close();
    output_file2.close();
    output_file3.close();
    input_file1.close();
    input_file2.close();

    return 0;
}
