//Problem 2

#include <iostream>
#include <cstring>
using namespace std;

int number_of_matches(char name1 [], char name2[] ){
    int counts = 0;
    int size_1,size_2;
    size_1 = strlen(name1) ;
    size_2 = strlen(name2) ;
    if(size_1 > size_2)
    {
        for(int i=0 ; i<size_1 ; i++)
        {
            if ((name1[i] != name2[i]) || (name1[i] == 0) || (name2[i] == 0))
                 return counts;
            else if (name1[i] == name2[i])
                counts++ ;

        }
    }
    else
    {
        for(int i=0 ; i<size_2 ; i++)
        {
            if ((name1[i] != name2[i]) || (name1[i] == 0) || (name2[i] == 0 ))
                return counts;
            else if ( name1[i] == name2[i])
                counts++ ;

        }
    }
    return counts ;
}

int main (){
    char name1 [100], name2 [100]; // declare two arrays
    cin.getline(name1,100) ;
    cin.getline(name2,100) ;

    // calling function and store the returned counter in matches
    int matches = number_of_matches(name1,name2) ;
    cout << matches; // print number of matches
    return 0;
}