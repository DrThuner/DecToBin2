#include <stdio.h>

long int dec_to_bin(int dec) {              // Funkcja konwertuje liczbe dziesiatna na binarna
    long int binary = 0;
    int remainder, i = 1, flag = 1;
    while (dec != 0) {
        remainder = dec % 2;
        dec /= 2;
        binary += remainder * i;
        i = i * 10;
    }
    return binary;
}

int main() {
    int dec;
    printf("Wprowadz liczbe dziesietna: ");
    scanf("%d", &dec);
    printf("Liczba binarna to: %d\n", dec_to_bin(dec));
    return 0;
}

