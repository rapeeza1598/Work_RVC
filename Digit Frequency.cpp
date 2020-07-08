#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // Sample Input 0
    // a11472o5t6
    // Sample Output 0
    // 0 2 1 0 1 1 1 1 0 0
    // Sample Input 1
    // lw4n88j12n1
    // Sample Output 1
    // 0 2 1 0 1 0 0 0 2 0
    // Sample Input 2
    // 1v88886l256338ar0ekk
    // Sample Output 2
    // 1 1 1 2 0 1 2 0 5 0
    char text[1000] = "";
    int num[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%[^\n]s",text);
    // printf("%d\n",sizeof(text));
    for (int i = 0; i < sizeof(text); i++)
    {
        if (text[i]=='0')
        {
            num[0]+=1;
        }
        if (text[i]=='1')
        {
            num[1]+=1;
        }
        if (text[i]=='2')
        {
            num[2]+=1;
        }
        if (text[i]=='3')
        {
            num[3]+=1;
        }
        if (text[i]=='4')
        {
            num[4]+=1;
        }
        if (text[i]=='5')
        {
            num[5]+=1;
        }
        if (text[i]=='6')
        {
            num[6]+=1;
        }
        if (text[i]=='7')
        {
            num[7]+=1;
        }
        if (text[i]=='8')
        {
            num[8]+=1;
        }
        if (text[i]=='9')
        {
            num[9]+=1;
        }
    }
    for (int n = 0; n <= 9; n++)
    {
        if(n==9)
        {
            printf("%d",num[9]);
        }
        else
        {
            printf("%d ",num[n]);
        }
        
    }
    return 0;
}
