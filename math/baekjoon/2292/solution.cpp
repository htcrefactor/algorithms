#include <iostream>

int main()
{
     long long n;
     cin >> n;

     if (n == 1)
          printf("1\n");
     else if (n <= 7)
          printf("2\n");
     else
     {
          int status = 0;
          int flag = 2;
          int steps = 3;
          long long i = 8; // Start with 8
          for (; i <= n;)
          {
               for (int j = 1; j <= flag * 6; j++)
               {
                    if (i == n)
                    {
                         status = 1;
                         break;
                    }
                    else
                         i++;
               }

               if (status == 0)
               {
                    steps++;
                    flag++;
               }
               else
               {
                    break;
               }
          }

          printf("%d\n", steps);
     }

     return 0;
}
