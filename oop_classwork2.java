import java.util.*;

class Vehicle {
    void horspower() {
        System.out.println("The vehicle is speeding up.");
    }
}

class Car extends Vehicle {
    @Override
    void horspower() {
        System.out.println("The car is accelerating.");
    }
}

class Bicycle extends Vehicle {
    @Override
    void horspower() {
        System.out.println("The bicycle is pedaling faster.");
    }
}

public class Main {
    public static void main(String[] args) {
        Vehicle v1 = new Car();
        Vehicle v2 = new Bicycle();

        v1.horspower(); // Output: The car is accelerating.
        v2.horspower(); // Output: The bicycle is pedaling faster.
    }
}
