#include <stdio.h>
void main()
{
    int Uid=5371;
    int Upwd=9647;
    int id;
    int pwd;
printf("enter the user id\n");
scanf("%d",&id);
printf("enter the pwd\n");
scanf("%d",& pwd);
if(Uid==id)
{
    if (Upwd==pwd)
    {
        printf("login sucessful\n");
    }
    else
    {
        printf("incorrect pwd\n");
    }
}
else
{
    printf("incorrect user id\n");
}
}
