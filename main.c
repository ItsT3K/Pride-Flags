#include <stdio.h>
#include <string.h>
    int main(int argc, char **argv){
        /* LGBT Pride Flag */
        if (argc > 1 && !strcmp(argv[1], "--lgbt")) {
            printf("\033[41m\n\033[43m\n\033[103m\n\033[42m\n\033[44m\n\033[45m\n\033[40m\n");
            printf("LGBT Pride!\n");
            return 0;
            }
        /* Trans Pride Flag */
        if (argc > 1 && !strcmp(argv[1], "--trans")){
            printf("\033[106m\n\n\033[105m\n\n\033[107m\n\n\033[105m\n\n\033[106m\n\n\033[40m\n");
            printf("Trans rights are human rights!\n");
            return 0;
            }
        /* Non Binary */
        if (argc > 1 && !strcmp(argv[1], "--enby")){
            printf("\033[103m\n\n\033[107m\n\n\033[45m\n\n\033[40m\n\n");
            printf("Non-Binary Pride!\n");
            return 0;
            }
            printf("Pride in your terminal\nThis is just a small little program that prints pride flags in your terminal!\n");
            printf("Written by Josh D. <ItsT3K>, 2022\n");
            printf("========================================\n");
            printf("--lgbt = LGBT Pride Flag\n--trans = Trans Pride Flag\n--enby = Non-Binary Pride Flag\n");
            return 0;

        }