/*
  Name: Omkar Irappanavar
  Project: Trivial File Transfer Protocol (TFTP)
*/

#include "tftp.h"

int main()
{
    if(Connect() == -1)
    {
        printf("Connection failed\n");
        return 0;
    }
}
