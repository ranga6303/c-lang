import java.util.Scanner;

// Custom exception for incorrect PIN
class InvalidPinException extends Exception {
    public InvalidPinException(String message) {
        super(message);
    }
}

// Custom exception for insufficient balance
class InsufficientBalanceException extends Exception {
    public InsufficientBalanceException(String message) {
        super(message);
    }
}

// ATM class with Encapsulation
class ATM {
    private int pin;
    private double balance;

    // Constructor to initialize PIN and balance
    public ATM(int pin, double initialBalance) {
        this.pin = pin;
        this.balance = initialBalance;
    }

    // Method to validate PIN
    private void validatePin(int enteredPin) throws InvalidPinException {
        if (this.pin != enteredPin) {
            throw new InvalidPinException("Invalid PIN! Access Denied.");
        }
    }

    // Method to withdraw money
    public void withdraw(int enteredPin, double amount) throws InvalidPinException, InsufficientBalanceException {
        validatePin(enteredPin); // Check if PIN is correct

        if (amount > balance) {
            throw new InsufficientBalanceException("Insufficient balance! Your balance is: $" + balance);
        }

        balance -= amount;
        System.out.println("Withdrawal successful! Remaining balance: $" + balance);
    }
}

// Main class with ATM operations
public class ATMSystem {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Initialize ATM with a PIN and initial balance
        ATM myATM = new ATM(1234, 5000);

        System.out.print("Enter your PIN: ");
        int enteredPin = scanner.nextInt();

        System.out.print("Enter amount to withdraw: ");
        double withdrawAmount = scanner.nextDouble();

        try {
            myATM.withdraw(enteredPin, withdrawAmount);
        } catch (InvalidPinException | InsufficientBalanceException e) {
            System.out.println("Error: " + e.getMessage());
        }

        scanner.close();
    }
}
