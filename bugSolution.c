int main() {    int x = 10;    int *ptr = &x;    *ptr = 20;    printf("%d", x); // Output: 20    // Do not free the pointer because it is allocated on the stack     return 0; }