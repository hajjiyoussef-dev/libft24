int main() {
    unsigned char buffer[10];  // Create a buffer of 10 bytes

    // Fill the buffer with the value 255, which will be -1 in signed representation
    ft_memset(buffer, -1, sizeof(buffer));

    // Print the buffer values as signed integers
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%d ", (int)buffer[i]);  // Print each byte as a signed integer
    }
    printf("\n");

    return 0;
}