#include <stdio.h>

int main() {
    printf("hello wortld\n");

   #ifdef __STDC_VERSION__

    long version = __STDC_VERSION__;
    if (version == 202311L) printf("C23 standard\n");
    else if (version == 201710L) printf("C17 standard\n");
    else if (version == 201112L) printf("C11 standard\n");
    else if (version == 199901L) printf("C99 standard\n");
    else printf("Standard version macro: %ld\n", version);
#else
    printf("Pre-C99 or non-standard compliant compiler\n");
#endif
    return 0;
}

