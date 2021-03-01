#include <vector>
#include <string>
#include <iostream>

void removeShortWords(std::vector<std::string>);n

int main() 
{
   std::vector<std::string> myList;
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");
   myList.push_back("");

   // print out the vector before the modify

   std::cout << "****" << std::endl;
   removeShortWords(myList);
   // print out the vector after the modify

}


// Use remove_if and a custom callback function, write a function that removes all strings of length 3 or less
void removeShortWords(std::vector<std::string> vString) 
{

}