#include "raiz.h"

double sqrt(double n) {
    if (n < 0) {
        return -1; // no existe raiz real
    }

    double x = n;
    double last = 0.0;

    // Iterar hasta que el valor converja
    while (x != last) {
        last = x;
        x = 0.5 * (x + n / x);
    }

    return x;
}
