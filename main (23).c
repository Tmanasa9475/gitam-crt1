/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

  #include <stdio.h>
  #include <stdlib.h>
  int main() {
        int n, *data, index = 2, i = 0, j;
        printf("Enter the value for n:");
        scanf("%d", &n);

        if (n <= 0) {
                printf("Invalid input!!\n");
                return 0;
        }
        data = (int *)malloc(sizeof(int) * n);
        while(i < n) {
                data[i] = i + 1;
                i++;
        }

        if (n < 2) {
                printf("Lucky Number is 1!!\n");
                return 0;
        }

        
        while (index <= n) {
                j = count = 0;

                for (i = index - 1; i < n; i = i + index) {
                                data[i] = -1;
                }

                for (i = 0; i < n; i++) {
                        if (data[i] != -1) {
                                data[j++] = data[i];
                        }
                }

                n = j;
                index++;
        }
        printf("Lucky Numbers:");
        for (i = 0; i < n; i++) {
                printf("%d  ", data[i]);
        }
        printf("\n");
        return 0;
  }
