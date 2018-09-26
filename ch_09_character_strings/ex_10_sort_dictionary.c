// sorting a dictionary in alphabetical order

#include <stdio.h>

struct entry
{
    char word[15];
    char definition[64];
};

// Function to compare two character strings

int  compareStrings (const char  s1[], const char  s2[])
{
    int  i = 0, answer;

    while ( s1[i] == s2[i] && s1[i] != '\0'&& s2[i] != '\0' )
        ++i;

    if ( s1[i] < s2[i] )
        answer = -1;               /* s1 < s2  */
    else if ( s1[i] == s2[i] )
        answer = 0;                 /* s1 == s2 */
    else
        answer = 1;                 /* s1 > s2  */

    return answer;
}

// function to sort a dictionary

void dictionarySort(struct entry dictionary[], int entries) {
    struct entry temp[10];
    int i, j;

    for ( i = 0; i < entries - 1; ++i )
        for ( j = i + 1; j < entries; ++j )
            if ( compareStrings (dictionary[i].word, dictionary[j].word) == 1 ) {
                temp[i] = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp[i];
            }
}

// function to print a dictionary

void dictionaryPrint(struct entry dictionary[], int entries) {
    int i;

    for ( i = 0; i < entries; ++i )
        printf("Word: \"%16s\" \t Definition: \"%s\"\n", dictionary[i].word, dictionary[i].definition );
}

int main (void)
{
    struct entry dictionary[] =
        { { "aardvark", "a burrowing African mammal"        },
        { "ahoy",     "a nautical call of greeting"       },
        { "affix",    "to append; attach"                 },
        { "addle",    "to become confused"                },
        { "agar",     "a jelly made from seaweed"         },
        { "aerie",    "a high nest"                       },
        { "acumen",   "mentally sharp; keen"              },
        { "aigrette", "an ornamental cluster of feathers" },
        { "abyss",    "a bottomless pit"                  },
        { "ajar",     "partially opened"                  } };

    int entries = 10;

    printf("Dictionary before sorting:\n");
    dictionaryPrint(dictionary, entries);
    
    dictionarySort(dictionary, entries);

    printf("\nDictionary after sorting:\n");
    dictionaryPrint(dictionary, entries);

    printf("\n");

    return 0;
}
