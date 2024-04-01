#include <stdio.h>  
int main() {  
    int n; // Number of data points  
printf("Enter the number of data points: ");  
scanf("%d", &n);  
    float x[n], y[n]; // Arrays to store x and y values  
printf("Enter the equidistant x values:\n");  
    for (int i = 0; i< n; i++) {  
scanf("%f", &x[i]);  
    }  
printf("Enter the corresponding y values:\n");  
    for (int i = 0; i< n; i++) {  
scanf("%f", &y[i]);  
    }  
    float h = x[1] - x[0]; // Common difference  
    float f[n][n]; // Divided differences  
    // Initialize the divided differences with y values  
    for (int i = 0; i< n; i++) {  
        f[i][0] = y[i];  
    }  
    // Compute divided differences  
    for (int j = 1; j < n; j++) {  
        for (int i = 0; i< n - j; i++) {  
            f[i][j] = (f[i+1][j-1] - f[i][j-1]) / (x[i+j] - x[i]);  
        }  
    }  
    // Interpolating polynomial evaluation  
    float x_interp; // The point where you want to interpolate  
printf("Enter the value of x for interpolation: ");  
scanf("%f", &x_interp);  
    float result = f[0][0];  
    float term = 1.0;  
    for (int i = 0; i< n; i++) {  
        term *= (x_interp - x[i]);  
        result += f[0][i+1] * term;  
    }  
printf("Interpolated value at x = %.2f is %.6f\n", x_interp, result);  
    return 0;  
}  