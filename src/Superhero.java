abstract public class Superhero implements Addition{ // Abstrakcja - dzięki abstrakcji możemy poruszać się w skomplikowanym systemie
                                  // bez poznawania każdej klasy. Klasę abstrakcyjną implementujemy używając słowa "abstract".
                                  // Klasa abstrakcyjna może, również opierać się na podobieństwie w implementacji klas pochodnych.
                                  // Pewnym rodzajem abstrakcji możemy nazwać także interfejsy, które zawierają metody abstrakcyjne
                                  // czyli takie, które są stworzone bez określania parametrów, ponieważ są one różne dla innych klas.

    private int lifePoints;  // Hermetyzacja(enkapsulacja) - ukrywanie pewnych danych składowych lub metod obiektów danej klasy tak,aby
    private int strength;    //  były one dostępne tylko metodom wewnętrznym danej klasy. Poziomy dostępu określamy przez klauzulę private, co oznacza,że
    private int skills;      //   dany składnik jest dostępny tylko dla funkcji składowych danej klasy
    private int power;

    public Superhero(){}
    public Superhero(int lifePoints, int strength, int skills, int power){
        this.lifePoints = lifePoints;
        this.strength = strength;
        this.skills = skills;
        this.power = power;
    }

    public int getLifePoints(){
        return lifePoints;
    }

    public void setLifePoints(int lifePoints){
        this.lifePoints = lifePoints;
    }
    public int getStrength(){
        return strength;
    }

    public void setStrength(int strength){
        this.strength = strength;
    }

    public int getSkills(){
        return skills;
    }

    public void setSkills(int skills){
        this.skills = skills;
    }

    public int getPower(){
        return power;
    }

    public void setPower(int power){
        this.power = power;
    }
}
