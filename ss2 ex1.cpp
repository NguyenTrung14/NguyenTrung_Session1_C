#include <stdio.h>

int main() {
    // Kieu int: so nguy�n
    int a = 10; // Khai b�o bien a kieu int v� g�n gi� tri 10

    // Kieu float: so thuc c� dau phay
    float b = 5.5f; // Khai b�o bien b kieu float v� g�n gi� tri 5.5

    // Kieu double: so thuc c� do ch�nh x�c cao hon float
    double c = 3.14159; // Khai b�o bien c kieu double v� g�n gi� tri 3.14159

    // Kieu char: k� tu don
    char d = 'A'; // Khai b�o bien d kieu char v� g�n gi� tri 'A'

    // Kieu bool: gi� tri d�ng/sai (duoc dinh nghia trong stdbool.h)
    #include <stdbool.h>
    bool e = true; // Khai b�o bien e kieu bool v� g�n gi� tri true

    // In ra c�c gi� tri d� khoi tao
    printf("a (int): %d", a);
    printf("\nb (float): %.2f", b);
    printf("\nc (double): %.5f", c);
    printf("\nd (char): %c", d);
    printf("\ne (bool): %d", e); // In 1 cho true v� 0 cho false

    return 0;
}
