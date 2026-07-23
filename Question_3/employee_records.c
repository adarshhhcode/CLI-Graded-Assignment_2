#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct
{
    int id;
    char name[20];
} Employee;

int main()
{
    Employee emp;

    int fd = open("employees.dat", O_CREAT | O_RDWR, 0644);

    if(fd < 0)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    Employee e1 = {1,"Adarsh"};
    Employee e2 = {2,"Rahul"};
    Employee e3 = {3,"Priya"};

    write(fd,&e1,sizeof(Employee));
    write(fd,&e2,sizeof(Employee));
    write(fd,&e3,sizeof(Employee));

    Employee update = {2,"Rohan"};

    lseek(fd,sizeof(Employee),SEEK_SET);
    write(fd,&update,sizeof(Employee));

    lseek(fd,0,SEEK_SET);

    printf("Employee Records\n\n");

    while(read(fd,&emp,sizeof(Employee))>0)
    {
        printf("ID : %d\tName : %s\n",emp.id,emp.name);
    }

    close(fd);

    return 0;
}
