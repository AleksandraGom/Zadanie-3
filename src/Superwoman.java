public class Superwoman extends Superhero {

    protected int timeBeautician;
    protected int numberOfBags;

    public Superwoman(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags) {
        super(lifePoints, strength, skills, power);
        this.timeBeautician = timeBeautician;
        this.numberOfBags = numberOfBags;
    }

    public void saidSomething(){
        System.out.println("The heroine says something.");
    }

    public void whatYouWear(){
        System.out.println("The heroine is getting dressed.");
    }

    public void introduceYourself(){
        System.out.println("The heroine talks about herself.");
    }
}
