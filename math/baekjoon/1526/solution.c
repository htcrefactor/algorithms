// #include <stdio.h>

// int dec2gms(int dec) {
//    if (dec == 0) return 4;

//    int gms = 0;
//    for (int multiplier = 1 ; dec != 0 ; multiplier = multiplier * 10) {
//        // if dec % 2 == 0 then add multipler * 4
//        // else then add multiplier * 7
//        gms = gms + multiplier * (4 + (dec % 2) * 3);
//        dec = dec / 2;
//    }

//    return gms;
// }

// int main() {
//    int n = 0;
//    scanf("%d", &n);

//    for (int i = 63 ; 0 <= i ; i--) {
//        int gms = dec2gms(i);
// //        if (gms <= n) {
//            printf("%d\n", gms);
// //            break;
// //        }
//    }

//    return 0;
// }

#include <stdio.h>

int check(int n) {
   while(n) {
      int remainder = n % 10;
      if (remainder == 4 || remainder == 7) n = n / 10;
      else return 0;
   }

   return 1;
}

int main() {
   int n = 0;
   scanf("%d", &n);

   while(n) {
      if (check(n) == 1) {
         printf("%d\n", n);
         return 0;
      } else {
         n--;
      }
   }
   
   return 0;
}