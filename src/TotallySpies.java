public class TotallySpies extends Superwoman{

    private boolean lipstick;
    private boolean watch;
    private boolean shoes;

    public TotallySpies(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags, boolean lipstick, boolean watch, boolean shoes){
        super(lifePoints, strength, skills, power, timeBeautician, numberOfBags);
        this.lipstick = lipstick;
        this.watch = watch;
        this.shoes = shoes;
    }
    public void useLipstick(){
        if(lipstick){
            System.out.println("The laser has been switched on.");
        }else{
            System.out.println("This is only lipstick. Laser was not used.");
        }
    }

    public void useWatch(){
        if(watch){
            System.out.println("The scanner has been switched on.");
        }else{
            System.out.println("This is only watch. Scanner was not used.");
        }
    }

    public void useShoes(){
        if(shoes){
            System.out.println("Titanium shoes were used.");
        }else{
            System.out.println("These are ordinary shoes. Titanium shoes were not used.");
        }
    }

    public void saidSomething(){
        System.out.println("Like every girl, we like to look good.");
    }

    public void whatYouWear(){
        System.out.println("We put on our costume. We can save the world !!!");
    }

    public void introduceYourself(){
        System.out.println("We are super agents. Everyday ordinary students.");
    }
}
