int main(void)
{
    unsigned long checksum;
    clock_t total_start, total_end;
    clock_t start, end;
    double total_s, build_s, process_s, reduce_s;

    total_start = clock();

    start = clock();
    build_dataset();
    end = clock();
    build_s = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    process_dataset();
    end = clock();
    process_s = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    checksum = reduce_checksum();
    end = clock();
    reduce_s = (double)(end - start) / CLOCKS_PER_SEC;

    total_end = clock();
    total_s = (double)(total_end - total_start) / CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", total_s);
    printf("BUILD_DATA seconds: %.6f\n", build_s);
    printf("PROCESS seconds: %.6f\n", process_s);
    printf("REDUCE seconds: %.6f\n", reduce_s);

    return 0;
}
