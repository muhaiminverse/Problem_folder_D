

class Animal {
    public void sound() {
        System.out.println("making sound");
    }
}

class Bird extends Animal {
    @Override
    public void sound() {
        System.out.println("Bird sound!");
    }
}

class Cat extends Animal {
    @Override
    public void sound() {
        System.out.println("Cat sound!");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animal_s = new Animal();
        Animal bird = new Bird();
        Animal cat = new Cat();

        animal_s.sound();
        bird.sound(); 
        cat.sound(); 
    }
}
