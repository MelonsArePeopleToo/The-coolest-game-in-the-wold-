#include <iostream>
//#include "Network.h"
#include <boost/thread.hpp>


#define STARTNUMUSERS 0

void threadOne()
{
    while (true){
        std::cout<<"thr lol 1"<<std::endl;
    }

}

void threadTwo()
{
    while (true){
        std::cout<<"thr lol 2"<<std::endl;
    }
}
void threadThree()
{
    while (true){
        std::cout<<"thr lol 3"<<std::endl;
    }
}

int main() {

    boost::thread thread_1 = boost::thread(threadOne);
    boost::thread thread_2 = boost::thread(threadTwo);
    boost::thread thread_3 = boost::thread(threadThree);

    thread_1.join();
    thread_2.join();
    thread_3.join();

    return 0;
}