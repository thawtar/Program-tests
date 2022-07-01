#include <iostream>
#include <cmath>

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
    for(j=0;j<1000;j++)
    std::cout<< sin(float(i))*cos(float(j));
    
}
