#include <stdio.h>
#include "inc/my_sqlite3.h"
#include "inc/Sqlite3.h"

int main (void)
{
    printf("[file is %s]\n", __FILE__);
    //makeDateFile(0, NULL);
    sqlite_select_test();
    getchar();
    return 0;
}