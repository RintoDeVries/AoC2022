#include <iostream>
#include <fstream> 
#include <string>
#include <set>  

int yourResultPart2(char opponent_move, char your_move){
    //
    int current_score = 0; 
    if (opponent_move=='A'){
        if (your_move=='X'){
            current_score=3; 
        }
        else if (your_move=='Y'){
            current_score=4; 
        }
        else if (your_move=='Z'){
            current_score=8; 
        }

    }
    else if (opponent_move=='B'){
        if (your_move=='X'){
            current_score=1; 
        }
        else if (your_move=='Y'){
            current_score=5; 
        }
        else if (your_move=='Z'){
            current_score=9; 
        }

    }
    else if (opponent_move=='C'){
        if (your_move=='X'){
            current_score=2; 
        }
        else if (your_move=='Y'){
            current_score=6; 
        }
        else if (your_move=='Z'){
            current_score=7; 
        }


    }
    else {std::cout<<"move illegal"<<std::endl;}
    return current_score; 
}


int yourResultPart1(char opponent_move, char your_move){
    //
    int current_score = 0; 
    if (your_move=='X'){ //lose 
        current_score+=1; 
        if (opponent_move=='A'){
            current_score +=3; 
        }
        else if (opponent_move=='C'){
            current_score +=6; 
        }
    }
    else if (your_move=='Y'){ //draw
        current_score+=2; 
        if (opponent_move=='A'){
            current_score +=6; 
        }
        else if (opponent_move=='B'){
            current_score +=3; 
        }
    }
    else if (your_move=='Z'){ //win 
        current_score+=3; 
        if (opponent_move=='C'){
            current_score +=3; 
        }
        else if (opponent_move=='B'){
            current_score +=6; 
        }
    }
    else {std::cout<<"move illegal"<<std::endl;}
    return current_score; 
}

int main(){
    std::fstream file("input02.txt"); //last line needs to be an empty line! 
    std::string line;
    int score_part1=0, score_part2=0; 
    while (std::getline(file,line)){
        score_part1+=yourResultPart1(line[0],line[2]);
        score_part2+=yourResultPart2(line[0],line[2]);
    }
    std::cout<<"Result for part one ="<<score_part2<<std::endl; 
    return 0;
}