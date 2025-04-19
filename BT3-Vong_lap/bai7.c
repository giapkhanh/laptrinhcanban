//Bai 7

    printf("Nhap so n:");
    int so_n;
    float tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += 1 / i;
    }
    printf("Tong: %f", tong);

    //Bai 8
    int stn_n;
    int giaithua = 1;
    printf("Nhap so tu nhien n:");
    scanf("%d", &stn_n);

    for (int i = 1; i <= stn_n; i++)
    {
        giaithua *= i;
    }
    printf("Giai thua: %d", giaithua);
