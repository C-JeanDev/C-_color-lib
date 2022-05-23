#include <iostream>
#include <conio.h>
#include <windows.h>

/**
 * v 1.0
 * 
 *
 * Jean Claude Coppola
 * 
 * https://github.com/C-JeanDev
 * 
 * the functions with parameters render only the passed string of the selected color instead 
 * those without parameters render everything that comes after that color
 * 
 */


void color(int x)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, x);
};



void black()
{
    color(0);
}
void black(std::string x)
{
    color(0);
    std::cout << x << std::endl;
    light_white();
}

void blue(std::string x)
{
    color(1);
    std::cout << x << std::endl;
    light_white();
}
void blue()
{
    color(1);
}
void green(std::string x)
{
    color(2);
    std::cout << x << std::endl;
    light_white();
}
void green()
{
    color(2);
}
void cyan(std::string x)
{
    color(3);
    std::cout << x << std::endl;
    light_white();
}
void cyan()
{
    color(3);
}
void red(std::string x)
{
    color(4);
    std::cout << x << std::endl;
    light_white();
}
void red()
{
    color(4);
}
void magenta(std::string x)
{
    color(5);
    std::cout << x << std::endl;
    light_white();
}
void magenta()
{
    color(5);
}
void brown(std::string x)
{
    color(6);
    std::cout << x << std::endl;
    light_white();
}
void brown()
{
    color(6);
}
void lightgray(std::string x)
{
    color(8);
    std::cout << x << std::endl;
    light_white();
}
void lightgray()
{
    color(8);
}
void darkgray(std::string x)
{
    color(9);
    std::cout << x << std::endl;
    light_white();
}
void darkgray()
{
    color(9);
}

void light_green(std::string x)
{
    color(10);
    std::cout << x << std::endl;
    light_white();
}
void light_green()
{
    color(10);
}
void light_blue(std::string x)
{
    color(11);
    std::cout << x << std::endl;
    light_white();
}
void light_blue()
{
    color(11);
}
void light_red()
{
    color(12);
}
void light_red(std::string x)
{
    color(12);
    std::cout << x << std::endl;
    light_white();
}
void light_pink(std::string x)
{
    color(13);
    std::cout << x << std::endl;
    light_white();
}
void light_pink()
{
    color(13);
}
void light_yellow(std::string x)
{
    color(14);
    std::cout << x << std::endl;
    light_white();
}
void light_yellow()
{
    color(14);
}

void light_white()
{
    color(15);
}

void light_white(std::string x)
{
    color(15);
    std::cout << x << std::endl;
    light_white();
}

