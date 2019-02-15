
#include <thread>

#include "multithreadtask.h"
#include "logger.h"


/*
void task1()
{
    std::cout << "My name is: \tOlex Figel" << std::endl;
    std::cout << "My age is: \t" << 30 << std::endl;
    std::cout << "My weight is: \t" << 62.5 << " Kg" << std::endl;
}

void task2()
{
    int first;
    int second;

    std::cout << "Enter first number: ";
    std::cin >> first;
    std::cout << "Enter second number: ";
    std::cin >> second;

    std::cout << "Great, the sum is: " << first + second << std::endl;
}

void task3()
{


    std::cout << "English letters: " << std::endl;

    for(int i = 0; i < 26; i++)
    {
        char letter = 65 + i;

        std::cout << letter << " ";

    }



}


void task_lambda()
{
    //C++14
    //auto to_sqare14 = [](auto val){return val * val;};

    double val = 2.5;

    std::cout << "Sqare of " << val << ":\t" << to_sqare14(val) << std::endl;

    //C++11
    //int val = 2;
    //std::function <int(int)> to_sqare11 = [](int val){return val * val;};

    //std::cout << "Sqare of " << val << ":\t" << to_sqare11(val) << std::endl;


}
auto mul(auto x, auto y)
{
    return x * y;
}*/






















void task1()
{
    MultiThreadTask task1(1);
    task1.doSmth(60);
}

void task2()
{
    MultiThreadTask task2(2);
    task2.doSmth(60);
}



int main()
{


    //std::thread thread1(task1(), 1);
    std::thread thread1(task1);
    std::thread thread2(task2);


    thread1.join();
    thread2.join();







        return 0;

    }
