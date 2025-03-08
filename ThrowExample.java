public class ThrowExample {
     public static void validateAge(int age) { 
        if (age < 18) { 
            throw new IllegalArgumentException("Age must be 18 or above.");
         } 
         System.out.println("Valid age.");
         }
          public static void main(String[] args) { 
            validateAge(15); 
        } 
    } 
