// #include <stdio.h>

// int mostFrequentEven(int nums[], int n) {
//     int even_counts[1001] = {0};
//     int max_freq = 0;
//     int most_frequent_even = -1;

//     for (int i = 0; i < n; ++i) {
//         if (nums[i] % 2 == 0) {
//             even_counts[nums[i]]++;
//             if (even_counts[nums[i]] > max_freq) {
//                 max_freq = even_counts[nums[i]];
//                 most_frequent_even = nums[i];
//             } else if (even_counts[nums[i]] == max_freq && nums[i] < most_frequent_even) {
//                 most_frequent_even = nums[i];
//             }
//         }
//     }

//     return most_frequent_even;
// }

// int main() {
//     int nums[100];
//     int n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &nums[i]);
//     }

//     int result = mostFrequentEven(nums, n);
//     if (result != -1) {
//         printf("The most frequent even element is: %d\n", result);
//     } else {
//         printf("No even elements found.\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>
typedef struct hotel {
    char name[50];
    int price;
    int squarefeet;
    double ratio;
} HOTEL;
void Ratio_Order(HOTEL *h, int n);

int main() {
    int n;
    scanf("%d", &n);
    HOTEL h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%s %d %d", h[i].name, &h[i].price, &h[i].squarefeet);
        h[i].ratio = (double)h[i].squarefeet / h[i].price;
    }
    Ratio_Order(h, n);

    return 0;
}
void Ratio_Order(HOTEL *h, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (h[j].ratio < h[j + 1].ratio) {
                HOTEL temp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%s %d %d %.2lf\n", h[i].name, h[i].price, h[i].squarefeet, h[i].ratio);
    }
}


