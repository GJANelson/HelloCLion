

// Greatest Common Denominator
// PRE: a s a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b
int gcd(const int a, const int b) {
    if (a == 0){
        return b;
    } else {
        return gcd(b % a, a);
    }
}