#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    // Start with k = 2. The sum S for k=2 is (1 + 2) = 3.
    int S = 3; 
    int current_power_of_two = 4; // This will be the next number to add (for k=3)
 
    while (true) {
        // If n is perfectly divisible by our current sum S
        if (n % S == 0) {
            cout << n / S << "
";
            break; // Stop the loop immediately because we found a valid x
        }
 
        // If not divisible, update S to include the next day's candies
        S += current_power_of_two;          // e.g., 3 + 4 = 7, then 7 + 8 = 15
        current_power_of_two *= 2;         // Shift to the next power of 2 (4 -> 8 -> 16)
    }
}
 
int main() {
    // Fast I/O optimized for Competitive Programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        solve(); // Run our logic for each test case
    }
 
    return 0;
}