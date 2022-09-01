#include "stdio.h"
#include "utc2ltime.h"

int main(int argc ,char *argv[]){
    printf("utc2ltime function demo...\n");
    local_time time = utc_to_localtime(1662044812,8);
    printf("%4d-%02d-%02d %02d:%02d:%02d\n",time.year,time.month,time.day,time.hour,time.min,time.sec);


}

