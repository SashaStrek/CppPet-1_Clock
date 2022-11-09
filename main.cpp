#include <iostream>
#include <ctime>
//#include <iomanip>
#include <unistd.h> // for sleep()
//#include <string>
//#include <cstdlib>

using std::cout;
using std::endl;
using std::string;


int main()
{
    time_t currentTime; //тип time_t - псевдоним (alias) основного арифметического типа, способного представлять время, возвращаемое функцией time.
    currentTime = time(nullptr); // указали время
    tm *local_tm; // tm - структура, которая containing a calendar date and time broken down to its components
    local_tm = localtime(&currentTime); // положили в val структуры tm время, преобразованное из секунд в удобоворимый формат с помощью localtime

    while(true) {
        time(&currentTime);
        localtime(&currentTime);
        cout<< local_tm->tm_hour<<" : "<< local_tm->tm_min<<" : "<< local_tm->tm_sec << endl;
        sleep(1);
    }
    return 0;
}