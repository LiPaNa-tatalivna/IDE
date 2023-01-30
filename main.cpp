#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    string s, line;
    ifstream fin("in.txt");
    ofstream fout("out.txt");
    fin >> s;
    int n = atoi(s.c_str());
    int* massiv_1 = new int[n];
    for (int i = 0; i < n; i++){
        fin >> s;
        if (i == 0){
            *(massiv_1 + n - 1) = atoi(s.c_str());
        }
        else
            *(massiv_1 + i - 1) = atoi(s.c_str());
        // cout << s << " ";
    }
    
 
    
    cout << endl;
    
    fin >> s;
    fout << s << endl;
    int m = atoi(s.c_str());
    int* massiv_2 = new int[m];
    for (int i = 1; i <= m; i++){
        fin >> s;
        if (i == m){
            *massiv_2 = atoi(s.c_str());
        }
        else
            *(massiv_2 + i) = atoi(s.c_str());
        // cout << s << " ";
    }
    
    for (int i = 0; i < m; i++){
        fout << *(massiv_2 + i) << " ";
    }
    
    fout << endl << n << endl;
    for (int i = 0; i < n; i++){
        fout << *(massiv_1 + i) << " ";
    }
    
    fin.close();
    fout.close();
    delete[] massiv_1;
    delete[] massiv_2; 
    
    return 0;
}
