#include <stdio.h>

int main() {
    // Kieu int: so nguyên
    int a = 10; // Khai báo bien a kieu int và gán giá tri 10

    // Kieu float: so thuc có dau phay
    float b = 5.5f; // Khai báo bien b kieu float và gán giá tri 5.5

    // Kieu double: so thuc có do chính xác cao hon float
    double c = 3.14159; // Khai báo bien c kieu double và gán giá tri 3.14159

    // Kieu char: ký tu don
    char d = 'A'; // Khai báo bien d kieu char và gán giá tri 'A'

    // Kieu bool: giá tri dúng/sai (duoc dinh nghia trong stdbool.h)
    #include <stdbool.h>
    bool e = true; // Khai báo bien e kieu bool và gán giá tri true

    // In ra các giá tri dã khoi tao
    printf("a (int): %d", a);
    printf("\nb (float): %.2f", b);
    printf("\nc (double): %.5f", c);
    printf("\nd (char): %c", d);
    printf("\ne (bool): %d", e); // In 1 cho true và 0 cho false

    return 0;
}
