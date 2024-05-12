char* intToRoman(int num) {
    char *out;
    out = malloc(sizeof(char)*20);
    int index = 0;
    while(num!=0) {
        if (num>=1000) {
            num = num-1000;
            out[index++] = 'M';
        }else if (num>=900) {
            num = num-900;
            out[index++] = 'C';
            out[index++] = 'M';
        }else if (num>=500) {
            num = num-500;
            out[index++] = 'D';
        }else if (num>=400) {
            num = num-400;
            out[index++] = 'C';
            out[index++] = 'D';  
        }else if (num>=100) {
            num = num-100;
            out[index++] = 'C';
        }else if (num>=90) {
            num = num-90;
            out[index++] = 'X';
            out[index++] = 'C';
        }else if (num>=50) {
            num = num-50;
            out[index++] = 'L';
        }else if (num>=40) {
            num = num-40;
            out[index++] = 'X';
            out[index++] = 'L';
        }else if (num>=10) {
            num = num-10;
            out[index++] = 'X';
        }else if (num>=9) {
            num = num-9;
            out[index++] = 'I';
            out[index++] = 'X';
        }else if (num>=5) {
            num = num-5;
            out[index++] = 'V';
        }else if (num>=4) {
            num = num-4;
            out[index++] = 'I';
            out[index++] = 'V';
        }else {
            num = num-1;
            out[index++] = 'I';
        }
    }
    out[index]='\0';
    return out;
}