#include <iostream>
#include <string>
#include <vector>



//variable space
int a;
int b;
char player = 'X';
int playerShips = 0;


char matrix[8][8] = { '-','-','-','-','-','-','-','-','-','-','-','-','-','-'
,'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'
,'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'
,'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' };


void EightGrid()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std:: cout << std::endl;
    }
}

char matrix1[10][10] = { '-','-','-','-','-','-','-','-','-','-'
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' 
,'-','-','-','-','-','-','-','-','-','-' };


void TenGrid()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void intro()
{
    std::cout << "ayooo what kinda battlechip game would cha like to play?" << std::endl;
    std::cout << "\nwe got an 8x8 game and a 10x10 game please choose." << std::endl;
    std::cout << "\n1.) 8x8   and    2.) 10x10"<< std::endl;
    std::cin >> b;
    if (b == 1)
    {
        std::cout << "\n\n\n" <<std::endl ;
        EightGrid();
    }
    else if (b == 2)
    {
        std::cout << "\n\n\n" << std::endl;
        TenGrid();
    }
    else
    {
        std::cout << "follow directions please >:("  ;

    }

}
void inputOfPLayerM0()
{
    std::cout << "enter a number 1-64 for ship placement"<<std::endl;
    std::cin >> a;

    if (a == 1)
    {
        matrix[0][0] = player;
    }
    else if (a == 2)
    {
        matrix[0][1] = player;
    }
    else if (a == 3)
    {
        matrix[0][2] = player;
    }
    else if (a == 4)
    {
        matrix[0][3] = player;
    }
    else if (a == 5)
    {
        matrix[0][4] = player;
    }
    else if (a == 7)
    {
        matrix[0][5] = player;
    }
    else if (a == 8)
    {
        matrix[0][6] = player;
    }
    else if (a == 9)
    {
        matrix[0][7] = player;
    }
    else if (a == 10)
    {
        matrix[1][0] = player;
    }
    else if (a == 11)
    {
        matrix[1][1] = player;
    }
    else if (a == 12)
    {
        matrix[1][2] = player;
    }
    else if (a == 13)
    {
        matrix[1][3] = player;
    }
    else if (a == 14)
    {
        matrix[1][4] = player;
    }
    else if (a == 15)
    {
        matrix[1][5] = player;
    }
    else if (a == 16)
    {
        matrix[1][6] = player;
    }
    else if (a == 17)
    {
        matrix[1][7] = player;
    }
    else if (a == 18)
    {
        matrix[2][0] = player;
    }
    else if (a == 19)
    {
        matrix[2][1] = player;
    }
    else if (a == 20)
    {
        matrix[2][2] = player;
    }
    else if (a == 21)
    {
        matrix[2][3] = player;
    }
    else if (a == 22)
    {
        matrix[2][4] = player;
    }
    else if (a == 23)
    {
        matrix[2][5] = player;
    }
    else if (a == 24)
    {
        matrix[2][6] = player;
    }
    else if (a == 25)
    {
        matrix[2][7] = player;
    }
    else if (a == 26)
    {
        matrix[3][0] = player;
    }
    else if (a == 27)
    {
        matrix[3][1] = player;
    }
    else if (a == 28)
    {
        matrix[3][2] = player;
    }
    else if (a == 29)
    {
        matrix[3][3] = player;
    }
    else if (a == 30)
    {
        matrix[3][4] = player;
    }
    else if (a == 31)
    {
        matrix[3][5] = player;
    }
    else if (a == 32)
    {
        matrix[3][6] = player;
    }
    else if (a == 33)
    {
        matrix[3][7] = player;
    }
    else if (a == 34)
    {
        matrix[4][0] = player;
    }
    else if (a == 35)
    {
        matrix[4][1] = player;
    }
    else if (a == 36)
    {
        matrix[4][2] = player;
    }
    else if (a == 37)
    {
        matrix[4][3] = player;
    }
    else if (a == 38)
    {
        matrix[4][4] = player;
    }
    else if (a == 39)
    {
        matrix[4][5] = player;
    }
    else if (a == 40)
    {
        matrix[4][6] = player;
    }
    else if (a == 41)
    {
        matrix[4][7] = player;
    }
    else if (a == 42)
    {
        matrix[5][0] = player;
    }
    else if (a == 43)
    {
        matrix[5][1] = player;
    }
    else if (a == 44)
    {
        matrix[5][3] = player;
    }
    else if (a == 45)
    {
        matrix[5][4] = player;
    }
    else if (a == 46)
    {
        matrix[5][5] = player;
    }
    else if (a == 47)
    {
        matrix[5][6] = player;
    }
    else if (a == 48)
    {
        matrix[5][7] = player;
    }
    else if (a == 49)
    {
        matrix[6][0] = player;
    }
    else if (a == 50)
    {
        matrix[6][1] = player;
    }
    else if (a == 51)
    {
        matrix[6][2] = player;
    }
    else if (a == 52)
    {
        matrix[6][3] = player;
    }
    else if (a == 53)
    {
        matrix[6][4] = player;
    }
    else if (a == 54)
    {
        matrix[6][5] = player;
    }
    else if (a == 55)
    {
        matrix[6][6] = player;
    }
    else if (a == 56)
    {
        matrix[6][7] = player;
    }
    else if (a == 57)
    {
        matrix[7][0] = player;
    }
    else if (a == 58)
    {
        matrix[7][1] = player;
    }
    else if (a == 59)
    {
        matrix[7][2] = player;
    }
    else if (a == 60)
    {
        matrix[7][3] = player;
    }
    else if (a == 61)
    {
        matrix[7][4] = player;
    }
    else if (a == 62)
    {
        matrix[7][5] = player;
    }
    else if (a == 63)
    {
        matrix[7][6] = player;
    }
    else if (a == 64)
    {
        matrix[7][7] = player;
    }
    else
    {
        return;
    }
    
}
int main()
{
    intro();

    while (playerShips < 5)
    {
        inputOfPLayerM0();
        
        EightGrid();

        playerShips++;
    }
   
    return 0;

}