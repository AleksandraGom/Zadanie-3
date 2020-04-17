public class Main {
    public static void main(String[] args) {

        /*Superhero superhero = new Superhero();
        superhero.setLifePoints(100);
        superhero.setStrength(50);
        superhero.setSkills(30);
        superhero.setPower(50);
*/
        System.out.println(" ");

        Superchild superchild = new Superchild(50, 25, 10, 20, true);
        superchild.introduceYourself();
        superchild.saidSomething();
        superchild.whatYouWear();
        superchild.useSmellyDiaper();
        superchild.Grow();


        System.out.println(" ");

        Batman batman = new Batman(100, 50, 20, 30, 8, 1, true);
        batman.introduceYourself();
        batman.saidSomething();
        batman.whatYouWear();
        batman.useBatmobil();


        System.out.println(" ");

        Spiderman spiderman = new Spiderman(100, 50, 30, 20, 3, 0);
        spiderman.introduceYourself();
        spiderman.saidSomething();
        spiderman.whatYouWear();
        spiderman.shootTheSpiderWeb();
        spiderman.walkOnTheWalls();


        System.out.println(" ");

        TotallySpies totallySpies = new TotallySpies(100, 50, 30, 20, 5, 100, true, true, false);
        totallySpies.introduceYourself();
        totallySpies.saidSomething();
        totallySpies.whatYouWear();
        totallySpies.useLipstick();
        totallySpies.useShoes();
        totallySpies.useWatch();


        System.out.println(" ");

        Fairy fairy = new Fairy(90, 50, 30, 40, 3, 20, true, true);
        fairy.introduceYourself();
        fairy.saidSomething();
        fairy.whatYouWear();
        fairy.useWand();
        fairy.useWings();

        System.out.println(" ");
        System.out.println("And now polymorphically");
        Superhero[] heros = {batman, spiderman, totallySpies, fairy, superchild};

        for(Superhero hero : heros){
            hero.introduceYourself();
            hero.saidSomething();
            hero.whatYouWear();
        }



    }
}