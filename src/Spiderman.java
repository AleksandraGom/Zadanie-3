public class Spiderman extends Superman
{

    public Spiderman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars ){
        super(lifePoints, strength, skills, power, timeGym, numberOfCars);
    }
    public void walkOnTheWalls() {

        System.out.println("He walks on the walls.");
    }
     public void shootTheSpiderWeb(){
            System.out.println("Spider web fired.");
        }

    public void saidSomething(){
        System.out.println("I really do not like spiders.");
    }

    public void whatYouWear(){
        System.out.println("I put on my costume. I am ready now.");
    }

    public void introduceYourself(){
        System.out.println("I am Spiderman. But my family calls me Sebastian.");
    }

}

