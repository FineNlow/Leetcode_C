char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0;; ++i) {
        if (strs[0][i] == '\0') {
            return strs[0];
        }

        for (int j = 0; j < strsSize; ++j) {
            if (strs[j][i] != strs[0][i]) {
                strs[0][i] == '\0';
                return strs[0];
            }
        }
    }
}
