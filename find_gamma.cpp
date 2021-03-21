#include <bits/stdc++.h>
#include <string>
#include <conio.h>
#include <fstream>


using namespace std;


int temp[8][6] = {
    32, 1, 2, 3, 4, 5,
    4, 5, 6, 7, 8, 9,
    8, 9, 10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32, 1};


int main()
{

    ifstream input_file;
    ofstream output_file;
    

    output_file.open("gamma.txt");
    input_file.open("reverse.txt");


    long long int i = 0, N_digit = 99999;

    while (i < N_digit)
    {
        i++;

        string t, s;

        getline(input_file, s);


        for (int m = 0; m < 8; m++)
        {
            for (int n = 0; n < 6; n++)
            {
                int sap = (s[temp[m][n] - 1] - 48);

                output_file << sap;
            }
        }

        output_file << "\n";
        getline(input_file, s);
        
    }
}
