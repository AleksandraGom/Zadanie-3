public class Batman extends Superman {

    private boolean batmobil;
    public Batman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars, boolean batmobil){
        super(lifePoints, strength, skills, power, timeGym, numberOfCars);
        this.batmobil = batmobil;
    }
    public void useBatmobil(){
        if(batmobil){
            System.out.println("The batmobil was used.");
        }else{
            System.out.println("Batmobil has not been used.");
        }
    }

    public void saidSomething(){
        System.out.println("I am very manly and handsome.");
    }

    public void whatYouWear(){
        System.out.println("I put on my costume. I am ready now.");
    }

    public void introduceYourself(){
        System.out.println("I am Batman. But my family calls me Bartek.");
    }
}
