#include<stdio.h>
#include<math.h>

double evaluatePolynomial(double *coefficients, int degree, double x) {
    double result = coefficients[0];
    for(int i = 1; i <= degree; i++) {
        result = result * x + coefficients[i];
    }
    return result;
}

double evaluateDerivative(double *coefficients, int degree, double x) {
    double result = coefficients[1];
    for(int i = 2; i <= degree; i++) {
        result = result * x + coefficients[i] * (i - 1);
    }
    return result;
}

double newtonmethod(double *coefficients, int degree, double x0, double epsilon, int maxiterations) {
    double x = x0;
    int iteration = 0;
    while(fabs(evaluatePolynomial(coefficients, degree, x)) >= epsilon && iteration < maxiterations) {
        double derivative = evaluateDerivative(coefficients, degree, x);
        if (derivative == 0) {
            printf("Derivative became zero. Exiting.\n");
            return -1; // Indicate failure
        }
        x = x - (evaluatePolynomial(coefficients, degree, x) / derivative);
        iteration++;
    }
    return x;
}

int main() {
    double coefficients[] = {-1, 3, -5, 2};
    int degree = sizeof(coefficients) / sizeof(coefficients[0]) - 1;
    double x0, epsilon, root;
    int maxiterations;
    printf("Newton's method\n");
    printf("Enter the initial guess: ");
    scanf("%lf", &x0);
    printf("Enter the desired accuracy: ");
    scanf("%lf", &epsilon);
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxiterations);
    root = newtonmethod(coefficients, degree, x0, epsilon, maxiterations);
    if (root != -1)
        printf("Approximate root: %lf\n", root);
    return 0;
}
