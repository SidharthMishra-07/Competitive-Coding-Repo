#include <iostream>
#include <iterator>
#include <map>
  
using namespace std;
  
int main()
{
  
    // empty map container
    map<int, int> quiz;
  
    // insert elements in random order
    quiz.insert(pair<int, int>(1, 40));
    quiz.insert(pair<int, int>(2, 30));
    quiz.insert(pair<int, int>(3, 60));
    quiz.insert(pair<int, int>(4, 20));
    quiz.insert(pair<int, int>(5, 50));
    quiz.insert(pair<int, int>(6, 50));
    quiz.insert(pair<int, int>(7, 10));

    //Printing map quiz

    map<int,int> :: iterator itr;
    cout << "\n The map quiz is : \n";
    cout << "\t Key \t Value \n";

    for(itr=quiz.begin(); itr!=quiz.end(); itr++)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    //Removing all elements having key value less than 3

    cout << "\n The map quiz after removing all elements having key value less than 3 is : \n";
    cout << "\t Key \t Value \n";

    quiz.erase(quiz.begin(),quiz.find(3));

    for(itr=quiz.begin(); itr!=quiz.end(); itr++)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

    //Removing element having key=4 from map

    cout << "\n The map quiz after removing the element having key=4 from map is : \n";
    cout << "\t Key \t Value \n";

    // quiz.erase(4);           //erasing by key
    itr = quiz.find(4);         //erasing by iterator
    quiz.erase(itr);

    for(itr=quiz.begin(); itr!=quiz.end(); itr++)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;

}  