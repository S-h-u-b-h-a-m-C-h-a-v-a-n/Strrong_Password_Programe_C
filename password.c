#include<stdio.h>
#include<conio.h>

int main()
{
    UP:
    printf("Enter Valid Password: ");
    char string[100]={'\0'};
    int i;
    int error;
    int Lenght;
    int countL,countU,countS,countD;

    gets(string);

    printf("\nEntered Password is: %s\n",string);
    countL=countU=error=Lenght=countS=countD=0;

    for(i=0;string[i]!='\0';i++,Lenght++)
    {

        if((string[i]>='A' && string[i]<='Z') || (string[i]>='a' && string[i]<='z'||string[i]>='0' && string[i]<='9'))
        {
            if((string[i]>='A' && string[i]<='Z'))
            {

                countU++;
            }
            else if((string[i]>='0' && string[i]<='9'))
            {

                countD++;
            }
            else
            {

                countL++;
            }
        }
        else
        {

            countS++;
        }
    }

    if(countL==0 || countS==0 || countU==0 || countD==0)
    {
        error++;
        printf("\n\n Your password is not valid. \n");
    }

    if(countU == 0)
    {
        printf("\n There is no Upper case Letter. \n");
    }

    if(countL == 0)
    {
        printf("\nThere is no Lower case Letter.\n");
    }

    if(countS== 0)
    {
        printf("\nThere is no Specail Symbol. \n");
    }

    if(countD == 0)
    {
        printf("\nThere is no Digit. \n");
    }

    if(Lenght < 8)
    {
        printf("\n Your Lenght is weak. \n");
    }


    if(error > 0 )
    {
        printf("\n Please Reenter Your Password. \n");
    }

    if(error==0)
    {
        printf("\n Your Password Is Valid. ");

    }

    printf("\n -------------------------------------------- \n");

    printf("\n ******* Number Of Cases Handled ******* \n");

    printf("\n\nUpper case characters: [ %d ]\n",countU);
    printf("\nLower case characters: [ %d ]\n",countL);
    printf("\nSpecial characters: [ %d ]\n",countS);
    printf("\nDigit characters: [ %d ]\n",countD);
    printf("\nLength characters: [ %d ]\n",Lenght);
    printf(("\n\n ****************************************\n\n"));
    if(error>0)
    {
    goto UP;
     }
    return 0;
}
