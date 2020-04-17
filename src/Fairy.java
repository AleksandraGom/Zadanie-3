public class Fairy extends Superwoman {

    private boolean wand;
    private boolean wings;

    public Fairy(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags, boolean wand, boolean wings){
        super(lifePoints, strength, skills, power, timeBeautician, numberOfBags);
        this.wand = wand;
        this.wings = wings;
    }
    public void useWand(){
        if(wand){
            System.out.println("The wand has been used. Say the spell.");
        }else{
            System.out.println("The wans has not been used. You can not say the spell.");
        }
    }

    public void useWings(){
        if(wings){
            System.out.println("You can fly.");
        }else{
            System.out.println("You can not fly.");
        }
    }

    public void saidSomething(){
        System.out.println("I love my other self.");
    }

    public void whatYouWear(){
        System.out.println("With wings and a wand I can save the world.");
    }

    public void introduceYourself(){
        System.out.println("I am not harmful unless you are naughty.");
    }
}
