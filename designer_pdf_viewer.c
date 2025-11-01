#include <stdio.h>
#include <string.h>

int designerPdfViewer(int h[], char* word) {
    int max_height = 0;
    int word_length = strlen(word);

    for (int i = 0; i < word_length; i++) {
        int index = word[i] - 'a';
        if (h[index] > max_height) {
            max_height = h[index];
        }
    }

    return max_height * word_length;
}

int main() {
    int h[26];

    for (int i = 0; i < 26; i++) {
        scanf("%d", &h[i]);
    }

    char word[11];
    scanf("%s", word);

    int result = designerPdfViewer(h, word);
    printf("%d\n", result);

    return 0;
}
