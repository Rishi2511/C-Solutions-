 char str[1000];
    FILE *fptr;
    char fname[20]="rishi.txt";

    printf("\n\n create a file (rishi.txt) and input text :\n");
    printf("-------------------------------------------\n");
    fptr=fopen(fname,"w");
    if(fptr==NULL)
    {
        printf("error in opening file");
        exit(1);
    }
     printf("input a sentence : ");
     fgets(str , sizeof str, stdin);
     fprintf(fptr,"%s",str);
     fclose(fptr);
     printf("\n the file %s created successfully..!!\n\n",fname);
     return 0;   