#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    int id[n], deadline[n], profit[n];

    printf("Enter job id, deadline and profit:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &id[i], &deadline[i], &profit[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (profit[j] < profit[j + 1]) {

                int temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;

                temp = deadline[j];
                deadline[j] = deadline[j + 1];
                deadline[j + 1] = temp;

                
                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    int maxDeadline = deadline[0];
    for (i = 1; i < n; i++) {
        if (deadline[i] > maxDeadline)
            maxDeadline = deadline[i];
    }

    int schedule[maxDeadline];
    for (i = 0; i < maxDeadline; i++)
        schedule[i] = 0;

    int totalProfit = 0;

    for (i = 0; i < n; i++) {
        for (j = deadline[i] - 1; j >= 0; j--) {
            if (schedule[j] == 0) {
                schedule[j] = id[i];
                totalProfit += profit[i];
                break;
            }
        }
    }


    printf("\nScheduled Jobs: ");
    for (i = 0; i < maxDeadline; i++) {
        if (schedule[i] != 0)
            printf("Job %d ", schedule[i]);
    }

    printf("\nTotal Profit: %d\n", totalProfit);

    return 0;
}