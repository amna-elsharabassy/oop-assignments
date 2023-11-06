//
// Created by Sharabassy on 11/6/2023.
//

#include "PhishingScanner.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 79

const char *spam[] = {
        "congratulation", "free",
        "100%",
        "earn",
        "million",
        "click",
        "here",
        "instant",
        "limited",
        "urgent",
        "winner",
        "selected",
        "bargain",
        "deal",
        "debt",
        "lifetime",
        "cheap",
        "easy",
        "bonus",
        "credit",
        "bullshit",
        "scam",
        "junk",
        "spam",
        "passwords",
        "invest",
        "bulk",
        "exclusive",
        "win",
        "sign"
};

char *strtolower(char *s) {
    size_t n = strlen(s);
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

void find_string(char *emailSearch) {
    for (int i = 0; i < sizeof spam / sizeof *spam; i++) {
        if (strstr(emailSearch, spam[i])) {
            printf("Your email message is considered spam!\n");
            return;
        }
    }
    printf("Your email is not spam!\n");
}

int main() {
    char email[LEN + 1];
    printf("Enter your short email message: \n");
    fgets(email, LEN + 1, stdin);
    find_string(strtolower(email));
    return 0;
}