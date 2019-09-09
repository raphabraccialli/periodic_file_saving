#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

time_t currentTime;
struct tm *myTime;
int i = 0;

while(i < 1){
    time(&currentTime);
    *myTime = localtime(&currentTime);
    print("%i/%i/%i\n", myTime->tm_mon+1, myTime->tm_mday, myTime->tm_year+1900);
    i++;
}

}