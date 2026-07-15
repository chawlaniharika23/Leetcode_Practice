class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n * n;
        int sumEven = n * (n + 1);

        if (sumEven > sumOdd) {
            while (sumOdd != 0) {
                int rem = sumEven % sumOdd;
                sumEven = sumOdd;
                sumOdd = rem;
            }

            return sumEven;
        }

        else {
            while (sumEven != 0) {
                int rem = sumOdd % sumEven;
                sumOdd = sumEven;
                sumEven = rem;
            }

            return sumOdd;
        }
    }
};
