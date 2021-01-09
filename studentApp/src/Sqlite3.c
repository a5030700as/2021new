#include <stdio.h>
#include <string.h>

#include <sqlite3.h>


char cmd_buff[256];

void sqlite_select_test(void)
{
    printf("hello sqlite3  %s \n", SQLITE_VERSION);
}