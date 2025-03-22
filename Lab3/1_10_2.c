// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int k = 0;
//     int is_prime(int k);
//     scanf("%d",&k);
//     {
//         int i;
//         for (i+2; i<k; i++)
//         {
//             if (k%i == 0)
//                 return 0;
//         }
//         return 1;
//     }
// }
#include <stdio.h>
int main()
{
    int i = 0;
    int k; // 定义变量k
    int is_prime(int k);
    scanf("%d",&k);
    {
        int i;
        for (i+2; i<k; i++)
        {
            if (k%i == 0)
                return 0;
        }
        return 1;
    }
}
