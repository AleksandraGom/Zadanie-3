public class Superchild extends Superhero implements  SuperchildInterface{

    private boolean smellyDiaper;
    public Superchild(int lifePoints, int strength, int skills, int power, boolean smellyDiaper){
        super(lifePoints, strength, skills, power);
        this.smellyDiaper = smellyDiaper;
    }
    public void useSmellyDiaper(){
        if(smellyDiaper){
            System.out.println("Ohhh !!!, you have to change your diaper.");
        }else{
            System.out.println("Great !!!, the pie is already changed.");
        }
    }

    public void saidSomething(){
        System.out.println("Baa baa");
    }

    public void whatYouWear(){
        System.out.println("I put my diaper. This is my secret weapon.");
    }

    public void introduceYourself(){
        System.out.println("I am special baby.");
    }

    public void Grow(){
        System.out.println("I am already bigger.");
    }
}
