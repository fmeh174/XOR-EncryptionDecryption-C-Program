#include <stdio.h>
#include <string.h>

void make_new_name(char *new_name, char *original_name){
    strcpy(new_name, "new-");
    strcat(new_name, original_name);
}

int is_alpha(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

int is_digit(char c){
    if (c >= '0' && c <= '9'){
            return 1;
    } else {
        return 0;
    }
}

int is_valid_password(char *password){
    int length = strlen(password);
    int count_alpha = 0;
    int count_num = 0;
    int valid = 0;
    for (int i = 0; i < length; i++) {
        if (is_alpha(password[i])) {
            count_alpha += 1;
        }
        if (is_digit(password[i])) {
            count_num += 1;
        }
    }
    printf("Password length = %d\n", length);
    if (length < 8) {
        printf("The password needs to have at least 8 characters.\n");
        valid += 1;
    }
    if (count_alpha < 1) {
        printf("The password needs to contain at least 1 alphabetical character.\n");
        valid += 1;
    }
    if (count_num < 1) {
        printf("The password needs to contain at least 1 digit.\n");
        valid += 1;
    }

    if (valid == 0){
        return 1;
    } else {
        return 0;
    }
}


void perform_XOR(char *input_filename, char *output_filename, char *password){
    FILE *file = fopen(input_filename, "rb");
    FILE *newFile = fopen(output_filename, "wb");
    int password_length = strlen(password);
    char block[password_length];
    int i, numBytes;

    do {
        numBytes = fread(block, 1, password_length, file);
        for (i = 0; i < numBytes; i++) {
            block[i] = block[i] ^ password[i];
        }
        fwrite(block, 1, numBytes, newFile);
    } while (numBytes == password_length);

    fclose(newFile);
    fclose(file);

}

void print_first_five(char *filename){
    FILE *file = fopen(filename, "rb");
    unsigned char byte;
    int count = 0;

    while (count < 5)
        if (fread(&byte, 1, 1, file) == 1) {
            printf("%02x\n", byte);
            count++;
        } else {
            break;
    }

    fclose(file);
}

int main(int argc, char *argv[]) {
    char *input_file = argv[1];
    char *password = argv[2];
    char new_file[20];

    make_new_name(new_file, input_file);
    printf("New filename = %s\n", new_file);

    if (is_valid_password(password) == 0) {
        return 1;
    }
    perform_XOR(input_file, new_file, password);
    print_first_five(new_file);

    return 0;

}
