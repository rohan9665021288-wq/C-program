#include <stdio.h>     // For printing/input

int main() {
    int m1, m2, m3, m4, m5;  // 5 marks (easy, no array)
    int total;
    float pct;
    
    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);  // Get marks
    
    total = m1 + m2 + m3 + m4 + m5;  // Add them
    pct = total / 5.0;               // Percentage
    
    // Check PASS (all 40+?)
    if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40) {
        printf("Total = %d
", total);
        printf("Percentage = %.1f%%
", pct);
        printf("Result: PASS
");
        
        // Grade ladder
        if(pct >=75) printf("Grade: Distinction
");
        else if(pct >=60) printf("Grade: First Division
");
        else if(pct >=50) printf("Grade: Second Division
");
        else printf("Grade: Third Division
");
    }
    else {
        printf("Result: FAIL
");
    }
    return 0;
}
