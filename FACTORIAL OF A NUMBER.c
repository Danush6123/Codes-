//Author:rahul gowda kp
//Created:04-07-2024 11.25
//Modified:
#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    clock_t start_clock, end_clock;
    time_t start_time, end_time;
    double cpu_time_used;

    // Get start time
    start_time = time(NULL);
    start_clock = clock();

    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    // Get end time
    end_clock = clock();
    end_time = time(NULL);

    cpu_time_used = ((double)(end_clock - start_clock)) / CLOCKS_PER_SEC;

    // Display start and end times
    printf("Start time: %s", ctime(&start_time)); // ctime converts time_t to string
    printf("End time: %s", ctime(&end_time));

    printf("CPU time used: %lf seconds\n", cpu_time_used);

    return 0;
}
