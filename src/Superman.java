public class Superman extends Superhero { // Dziedziczenie - forma "ponownego" używania kodu, w której nowa klasa tworzona
    protected int timeGym;                // jest na podstawie już istniejącej, pobierając jej atrybuty i zachowania, a także dodając
    protected int numberOfCars;           // inne dane składowe i zachowania, których wymaga nowa klasa. Dziedziczenie określamy przez słowo "extends"
                                          // dodane w miejsu deklaracji nowej klasy a po nim następuje nazwa klasy macierzystej.

    public Superman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars) {
        super(lifePoints, strength, skills, power);
        this.timeGym = timeGym;
        this.numberOfCars = numberOfCars;
    }

    public void saidSomething(){
        System.out.println("The hero says something.");
    }

    public void whatYouWear(){
        System.out.println("The hero is getting dressed.");
    }

    public void introduceYourself(){
        System.out.println("The hero talks about himself.");
    }
}


