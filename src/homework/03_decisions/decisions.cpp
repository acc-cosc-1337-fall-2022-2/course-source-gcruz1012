//write include statement for decisions header
#include "decisions.h"


using std::string;


//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string letter_grade_if;
    if (grade>=90 and grade<=100) 
    {
        letter_grade_if = "A";
    }
    else if (grade>=80 and grade<=89)
    {
        letter_grade_if = "B";
    }
    else if (grade>= 70 and grade <=79)
    {
        letter_grade_if = "C";
    }
    else if (grade>=60 and grade<=69)
    {
        letter_grade_if = "D";
    }
    else
    {
        letter_grade_if = "F";
    }

    return letter_grade_if;
}
string get_letter_grade_using_switch(int grade)
{
    string letter_grade_switch;
    switch(grade)
    {
        case 90 ... 100:
            letter_grade_switch = "A";
            break;
        case 80 ... 89:
            letter_grade_switch = "B";
            break;
        case 70 ... 79:
            letter_grade_switch = "C";
            break;
        case 60 ... 69:
            letter_grade_switch = "D";
            break;
        default :
            letter_grade_switch = "F";
    }
    return letter_grade_switch;
}
    