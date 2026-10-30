#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

    int fd=0;
    char Arr[20];

    fd=open("demo.txt",O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open");
        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d\n",fd);
        read(fd,Arr,10);

        close(fd);
    }
}