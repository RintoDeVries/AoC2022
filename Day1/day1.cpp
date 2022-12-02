#include <iostream>
#include <fstream> 
#include <string>
#include <set>  




int main(){
    std::fstream file("input01.txt"); //last line needs to be an empty line! 
    std::string line;
    
    int curr=0,sol=0; 
    int first=0, second =0, third =0; 
    while (std::getline(file,line)){
        if(line.empty()){
            sol = curr; 
            curr = 0; 

        if (sol > first)
        {
            third = second;
            second = first;
            first = sol;
        }
 
        else if (sol> second)
        {
            third = second;
            second = sol;
        }
 
        else if (sol > third){
            third = sol;
        }
        }
        else {curr+=stoi(line);}

       
    }
    std::cout<<"solution to part one = "<<first<<std::endl; 
    std::cout<<"solution to part two = "<<first+second+third<<std::endl; 
    return 0;
}