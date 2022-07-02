#include <iostream>
#include <cmath>
#include "classTest.hpp"

test::test()
{
    std::cout<<"Test starting...\n";
}

test::~test()
{
    std::cout<<"Test ending...\n";
}

void test::run()
{
    std::cout<<"Test running...\n";
    for(int i=0;i<1000;i++)
<<<<<<< Updated upstream
    for(int j=0;j<1000;j++)
=======
        for(int j=0;j<1000;j++)
>>>>>>> Stashed changes
        std::cout<< sin(float(i))*cos(float(j));
    
}
