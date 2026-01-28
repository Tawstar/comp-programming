char* longestCommonPrefix(char** strs, int strsSize) {
    static char com[200];
    if (strsSize == 0) return "";
    strcpy(com, strs[0]);
    for (int i = 1; i < strsSize; i++) {
        for (int j = 0; com[j] != '\0'; j++) {
            if (strs[i][j] == '\0' || com[j] != strs[i][j]) {
                com[j] = '\0';
                break;
            }
        }
    }
    return com;
}


