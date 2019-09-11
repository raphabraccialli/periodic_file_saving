#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

struct tm currentTime;
struct tm oldTime;
time_t ltime;
int k = 0;
char file_name[50];
//FILE *file_hour;





//file = fopen("file1.txt", "a");

while(k < 1){
	ltime=time(&ltime);
    localtime_r(&ltime, &currentTime);
	localtime_r(&ltime, &oldTime);



    while(currentTime.tm_min == oldTime.tm_min){ // trocar pra hora
    	ltime=time(&ltime);
    	localtime_r(&ltime, &currentTime);

    	// rotina de salvar dados

    }

    sprintf(file_name, "%i_%i_%i_%i\n", currentTime.tm_year+1900, currentTime.tm_mon+1, currentTime.tm_mday, currentTime.tm_hour);
    printf("%s", file_name);
    // file_hour = file = fopen(file_name, "a");
    // escreve arquivo, salva estimativa
    // while(i<size(msg_buffer)){
    // fputs("This is testing for fputs...\n", file_hour);
	// }
    
    // fclose(file_name)

    k++;
    
}

//fclose(file);

}