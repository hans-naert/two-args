#include "tlpi_hdr.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
        usageErr("%s hexadecimal-argument decimal-argument\n", argv[0]);

    printf("hexadecimal-argument = 0x%x\n", getInt(argv[1], GN_BASE_16, "hexadecimal-argument"));
    printf("decimal-argument = %d\n", getInt(argv[2], GN_ANY_BASE, "decimal-argument"));

    exit(EXIT_SUCCESS);
}