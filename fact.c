void factorial() {
    int num, i;
    unsigned long long factorial = 1;  // Using unsigned long long to handle large numbers

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Calculate factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Print the factorial
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    //return 0;
}

