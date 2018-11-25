#include<stdio.h>
int main()
{
    int res = 0, i, max;
    char str[] = "333333";
    max = 2147483647/10;
    for(i = 0; str[i] !='\0';)
    {
        if((str[i] == 32) && (res == 0))
        {
            i++;
        }
        else if((str[i] == 32) && (res != 0))
        {
            break;
        }
        else if((str[i] < 48) || (str[i] > 57))
        {
            break;
        }
        else
        {
//            printf("%d\n",res);
            if(res >= max)
            {
                res = 2147483647;
                printf("%d\n",res);
                break;
            }
            
            res = res * 10 + str[i] - '0';
//            printf("%d\n",res);
            i++;   
        }
    }    
    printf("%d\n",res);
}
