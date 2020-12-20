#include <iostream>

int beans = 200;
int a;
int cupOfCoffee = 0;
int i = 15;


int coffee()
{
    std::cout << "Congrats on making coffee! please leave.\n";
    std::cout << "\namount of beans left ";
    std::cout<< beans;
    return 0;
}
int water_heating()
{
    std::cout << "filling water\n";
    std::cout << "boilling water\n";

    for (int i = 0; i < 180; ++i)
    {
        if (i == 180)
        {
            std::cout << "water is hot!!\n";
            coffee();
        }
        else
        {
            std::cout << "...";
        }
        
    }
     
    return 0;
}

int coffeeBeans()
{
   //200 bewans 
    
    if (a == 1)
    {
        std::cout << "making a cup of coffee\n";
        beans = 150;
        cupOfCoffee = 1;
    }
    else if (a == 2)
    {
        std::cout << "making 2 cups of coffee\n";
        beans = 100;
        cupOfCoffee = 2;
    }
    else if (a == 3)
    {
        std::cout << "making 3 cups of coffee\n";
        beans = 50;
        cupOfCoffee = 3;
    }
    else if (a == 4)
    {
        std::cout << "making 4 cups of coffee\n";
        beans = 0;
        cupOfCoffee = 4;
    }  
    return 0;
}

int main()
{
    std::cout << "Welcome to the salty spatoon how many cups of coffee would you like?\n";
    std::cout << "1, 2, 3,or 4,\n";
    std::cin >> a;
    water_heating();
    coffeeBeans();
    coffee();
    return 0;
}