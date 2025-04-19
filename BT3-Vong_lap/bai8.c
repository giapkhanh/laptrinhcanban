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
