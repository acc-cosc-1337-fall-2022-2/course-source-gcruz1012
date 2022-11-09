//add include statements
//#include <string>
#include "func.h"

using std::string;




//add function code here
double get_gc_content(const string& dna)
{
    double count = 0.0;
    int i = 0;

    while (i < dna.length())
    {
        
        if (dna[i] == 'C' || dna[i] == 'G')
        {
            count++;
        }
        
        i++;
    }

    double gc_count = count/dna.length();

    return gc_count;
}
string get_dna_complement(string dna)
{
    string reverse = get_reverse_string(dna);
    string dna_complement;
    for (int i = 0; i < reverse.length(); i++)
    {
        switch (reverse[i])
        {
            case 'A':
                dna_complement += 'T';
                break;
            case 'T':
                dna_complement += 'A';
                break;
            case 'C':
                dna_complement += 'G';
                break;
            case 'G':
                dna_complement += 'C';
                break;

        }
    }
    return dna_complement;


}
 string get_reverse_string(string dna)
 {
    //vector<char> r;
    //r.push_back('h');
    //string hey = r[0];

    string reverse_dna;
    for (int i = dna.length(); i >= 0; --i)
    {
        reverse_dna.append(dna, i,1);
    }
    return reverse_dna;
 }