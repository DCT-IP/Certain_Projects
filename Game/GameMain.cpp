#include <iostream>
#include <stack>
#include <cstdlib>

void Update_Posn(char pos_updt, int*posn)
{
    switch(pos_updt){
        case 'a':
            posn[0]--;
            break;
        case 'd':
            posn[0]++;
            break;
        case 'w':
            posn[1]++;
            break;
        case 's':
            posn[1]--;
            break;
        default:
            std::cout << "    INVALID INPUT; Please Try again later";
            break;
    }
}

void undoPos(std::stack<char> istec, int*posn)
{
    if(!istec.empty()){
        char move = istec.top();
        switch (move)
        {
        case 'a':
            std::cout << "    Undoing last move: a\n";posn[0]++;
            break;
        case 'd':
            std::cout << "    Undoing last move: d\n";posn[0]--;
            break;
        case 'w':
            std::cout << "    Undoing last move: w\n";posn[1]--;
            break;
        case 's':
            std::cout << "    Undoing last move: s\n";posn[1]++;
            break;
        
        default:
        std::cout << "    How did you even get here? ";
            break;
        }
    } else {
        std::cout << "No moves to undo\n";
    }
}

int main()
{
    int Ppos[] = {0,0};//players start from the origin(x,y)
    int* ptr = Ppos;
    int ch1;char chr=' ';
    std::stack<char> Input_Record;
    std::cout <<"=========================================\n";
    std::cout <<"||        WELCOME TO RPG[NAME]         ||\n";
    std::cout <<"=========================================\n"; 
    std::cout <<"    Press 1 to start \n";
    std::cout <<"    Press 0 to quit  \n";
    std::cin >> ch1;
    if(ch1 == 0)
    {
        std::cout <<"    Thank you for playing the game    ";
        return 0;
    }
    std::cout <<"----------------------------------------\n";
    std::cout <<"          THE RULES OF THE GAME         \n";
    std::cout <<"    1.You can move once every move\n";
    std::cout <<"    2.There can be random events\n";
    std::cout <<"    3.You will move one unit(in game) every move.";
    std::cout <<"    4.'w','s','a','d' to be used to move.";
    std::cout <<"    5.You can undo your last move by pressing 'u'\n";
    std::cout <<"    6.You can exit in any move by pressing 'q. PROGRESS WILL NOT BE SAVED\n";
    do{
        std::cout <<"\n    Your Current Position is: ("<<ptr[0]<<","<<ptr[1]<<")";
        std::cout <<"\n    Enter Your Move:";
        std::cin >> chr;
        if(chr == 'u'){
            undoPos(Input_Record,ptr);
            Input_Record.pop();
            continue;
        }
        if(chr == 'q'){
            std::cout << "Quitting the game";
            return 0;
        }
        Input_Record.push(chr);
        Update_Posn(chr, ptr);
    }while(chr!='q');//main game loop ends
    return 0;
}