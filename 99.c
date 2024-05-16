/*
    Write a C program to check the entered password by the user is valid or not
    based on his/her ID using if-else.
*/

#include<stdio.h>

int main()
{
    int userId;
    int pwd;
    int validId;
    int validPwd;

    printf("Please Enter user id : \n");
    scanf("%d", &userId);
    printf("Enter an id for validating : \n");
    scanf("%d", &validId);

    switch(validId > 0 && validId != 0)
    {
    case 1 :
        switch(validId == userId)
        {
        case 1 :
            //printf("The ID user have entered was correct.\n");
            printf("Please Enter a password : \n");
            scanf("%d", &pwd);
            printf("Enter a password for validating purpose : \n");
            scanf("%d", &validPwd);
            switch(validPwd > 0 && validPwd != 0)
            {
            case 1 :
                switch(validPwd == pwd)
                {
                case 1 :
                    printf("The password user have entered was correct.\n");
                    break;
                default :
                    printf("The password user have entered was incorrect.\n");
                    break;
                }
                break;
            default :
                printf("Invalid Password!\n");
                break;
            }
            break;
        default :
            printf("Invalid user id!\n");
            break;
        }
    }

    getch();
}
