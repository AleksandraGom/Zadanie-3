# include <iostream>

using namespace std;

class Addition {
public:
	virtual void saidSomething() = 0;           /// Polimorfizm - mechanizm umo¿liwiaj¹cy ró¿ne zachowanie tych samcyh metod wirtualnych(funckji wirtualnych)
    virtual void whatYouWear() = 0;             /// w czasie wykonywania programu. Dziêki polimorfizmowy wystarczy utworzyæ jedn¹ metodê,
    virtual void introduceYourself() = 0;       /// która bêdzie dzia³a³a we wszytskich klasach.
                                                /// Deklaracja takiej metody rozpoczyna siê s³owem kluczowym "virtual".

};

class SuperchildInterface {

   public:
   virtual void Grow() = 0;                 ///Abstrakcja - dziêki abstrakcji mo¿emy poruszaæ siê w skomplikowanym systemie
                                            /// bez poznawania ka¿dej klasy, funkcji(metody).Funkcjê abstrakcyjn¹ implementujemy tak jak pokazano w linijce 17,
                                            /// bez okreœlania parametrów, poniewa¿ s¹ ró¿ne dla innych klas.
};


class Superhero:public Addition {

    public:
    Superhero(){}
    Superhero(int lifePoints, int strength, int skills, int power){
        this->lifePoints = lifePoints;
        this->strength = strength;
        this->skills = skills;
        this->power = power;
    }

    int getLifePoints(){
        return lifePoints;
    }

    void setLifePoints(int lifePoints){
        this->lifePoints = lifePoints;
    }
    int getStrength(){
        return strength;
    }

    void setStrength(int strength){
        this->strength = strength;
    }

    int getSkills(){
        return skills;
    }

    void setSkills(int skills){
        this->skills = skills;
    }

    int getPower(){
        return power;
    }

    void setPower(int power){
        this->power = power;
    }


    void saidSomething(){
        cout<<"The hero says something."<<endl;
    }

    void whatYouWear(){
        cout<<"The hero is getting dressed."<<endl;
    }

    void introduceYourself(){
        cout<<"The hero talks about himself."<<endl;
    }

    protected:
     int lifePoints;
     int strength;
     int skills;
     int power;

};

 class Superman:public Superhero {    /// Dziedziczenie - forma "ponownego" u¿ywania kodu, w której nowa klasa tworzona
                                      /// jest na podstawie ju¿ istniej¹cej, pobieraj¹c jej atrybuty i zachowania, a tak¿e dodaj¹c
                                      /// inne dane sk³adowe i zachowania, których wymaga nowa klasa. Dziedziczenie okreœlamy przez komendê
                                      /// np. ":public" dodan¹ w miejsu deklaracji nowej klasy a po niej nastêpuje nazwa klasy macierzystej.
                                      /// W miejscu "public" mo¿e wystêpowaæ zarówno s³owo "private" lub "protected" zale¿nie od dostêpu.
    protected:
    int timeGym;
    int numberOfCars;

    public:
        //Superman();
     Superman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars)
     :Superhero(lifePoints, strength, skills, power){


        this->timeGym = timeGym;
        this->numberOfCars = numberOfCars;

    }

};

class Superwoman:public Superhero {

    protected:
    int timeBeautician;
    int numberOfBags;

    public:
    Superwoman(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags)
        :Superhero(lifePoints, strength, skills, power){
        this->timeBeautician = timeBeautician;
        this->numberOfBags = numberOfBags;
    }
};

 class Superchild:public Superhero, public SuperchildInterface{

    private:
    bool smellyDiaper;      /// Hermetyzacja(enkapsulacja) - ukrywanie pewnych danych sk³adowych lub metod obiektów danej klasy tak,aby
                            ///  by³y one dostêpne tylko metodom wewnêtrznym danej klasy. Poziomy dostêpu okreœlamy przez klauzulê private,
                            /// co oznacza,¿e dany sk³¹dnik jest dostêpny tylko dla funkcji sk³adowych danej klasy.

    public:
    Superchild(int lifePoints, int strength, int skills, int power, bool smellyDiaper)
        :Superhero(lifePoints, strength, skills, power){
        this->smellyDiaper = smellyDiaper;
    }
    void useSmellyDiaper(){
        if(smellyDiaper){
            cout<<"Ohhh !!!, you have to change your diaper."<<endl;
        }else{
            cout<<"Great !!!, the pie is already changed."<<endl;
        }
    }

    void saidSomething(){
        cout<<"Baa baa"<<endl;
    }

    void whatYouWear(){
        cout<<"I put my diaper. This is my secret weapon."<<endl;
    }

    void introduceYourself(){
        cout<<"I am special baby."<<endl;
    }

    void Grow(){
        cout<<"I am already bigger."<<endl;
    }
};



 class Batman:public Superman{

    protected:
    bool batmobil;

    public:
    //    Batman();
    Batman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars, bool batmobil)
    :Superman(lifePoints, strength, skills, power, timeGym, numberOfCars){

        this->batmobil = batmobil;
    }
    void useBatmobil(){
        if(batmobil){
            cout<<"The batmobil was used."<<endl;
        }else{
            cout<<"Batmobil has not been used."<<endl;
        }
    }


    void saidSomething(){
        cout<<"I am very manly and handsome."<<endl;
    }

    void whatYouWear(){
        cout<<"I put on my costume. I am ready now."<<endl;
    }

    void introduceYourself(){
        cout<<"I am Batman. My family calls me Bartek."<<endl;
    }

};

 class Spiderman:public Superman{

    public:
    Spiderman(int lifePoints, int strength, int skills, int power, int timeGym, int numberOfCars )
        :Superman(lifePoints, strength, skills, power, timeGym, numberOfCars){
    }
    void walkOnTheWalls() {

        cout<<"He walks on the walls."<<endl;
    }
    void shootTheSpiderWeb(){
            cout<<"Spider web fired."<<endl;
        }

    void saidSomething(){
        cout<<"I really do not like spiders."<<endl;
    }

    void whatYouWear(){
        cout<<"I put on my costume. I am ready now."<<endl;
    }

    void introduceYourself(){
        cout<<"I am Spiderman. My family calls me Sebastian."<<endl;
    }

};

 class TotallySpies:public Superwoman{

    private:
    bool lipstick;
    bool watch;
    bool shoes;

    public:
    TotallySpies(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags, bool lipstick, bool watch, bool shoes)
        :Superwoman(lifePoints, strength, skills, power, timeBeautician, numberOfBags){
        this->lipstick = lipstick;
        this->watch = watch;
        this->shoes = shoes;
    }
    void useLipstick(){
        if(lipstick){
            cout<<"The laser has been switched on."<<endl;
        }else{
            cout<<"This is only lipstick. Laser was not used."<<endl;
        }
    }

    void useWatch(){
        if(watch){
            cout<<"The scanner has been switched on."<<endl;
        }else{
            cout<<"This is only watch. Scanner was not used."<<endl;
        }
    }

    void useShoes(){
        if(shoes){
            cout<<"Titanium shoes were used."<<endl;
        }else{
            cout<<"These are ordinary shoes. Titanium shoes were not used."<<endl;
        }
    }

    void saidSomething(){
        cout<<"Like every girl, we like to look good."<<endl;
    }

    void whatYouWear(){
        cout<<"We put on our costume. We can save the world !!!"<<endl;
    }

    void introduceYourself(){
        cout<<"We are super agents. Everyday ordinary students."<<endl;
    }
};

 class Fairy:public Superwoman{

    private:
    bool wand;
    bool wings;

    public:
    Fairy(int lifePoints, int strength, int skills, int power, int timeBeautician, int numberOfBags, bool wand, bool wings)
        :Superwoman(lifePoints, strength, skills, power, timeBeautician, numberOfBags){
        this->wand = wand;
        this->wings = wings;
    }
    void useWand(){
        if(wand){
            cout<<"The wand has been used. Say the spell."<<endl;
        }else{
            cout<<"The wans has not been used. You can not say the spell."<<endl;
        }
    }

    void useWings(){
        if(wings){
            cout<<"You can fly."<<endl;
        }else{
            cout<<"You can not fly."<<endl;
        }
    }

    void saidSomething(){
        cout<<"I am not harmful unless you are naughty."<<endl;
    }

    void whatYouWear(){
        cout<<"With wings and a wand I can save the world."<<endl;
    }

    void introduceYourself(){
        cout<<"I am a fairy. My family calls me Zosia."<<endl;
    }
};





int main(){

        Superhero *superhero;
        superhero = new Superhero(200,200,200,200);
        superhero->introduceYourself();
        superhero->saidSomething();
        superhero->whatYouWear();

      cout<<" "<<endl;
        Batman *batman;
        batman = new Batman(100,50,30,30,5,4,true);
        batman->introduceYourself();
        batman->saidSomething();
        batman->whatYouWear();
        batman->useBatmobil();
        cout<<"  "<<endl;

        cout<<"Batman has "<<batman->getLifePoints()<<" life points"<<endl;
        batman->setLifePoints(200);
        cout<<"Batman has "<<batman->getLifePoints()<<" life points"<<endl;

     cout<<" "<<endl;
        Spiderman *spiderman;
        spiderman = new Spiderman(100,50,40,20,6,10);
        spiderman->introduceYourself();
        spiderman->saidSomething();
        spiderman->whatYouWear();
        spiderman->shootTheSpiderWeb();
        spiderman->walkOnTheWalls();
     cout<<" "<<endl;
        TotallySpies *totallySpies;
        totallySpies = new TotallySpies(100,50,30,40,10,100,true,false,true);
        totallySpies->introduceYourself();
        totallySpies->saidSomething();
        totallySpies->whatYouWear();
        totallySpies->useLipstick();
        totallySpies->useWatch();
        totallySpies->useShoes();
     cout<<" "<<endl;
        Fairy *fairy;
        fairy = new Fairy(100,30,40,50,5,50,true,true);
        fairy->introduceYourself();
        fairy->saidSomething();
        fairy->whatYouWear();
        fairy->useWand();
        fairy->useWings();
     cout<<" "<<endl;
        Superchild *superchild;
        superchild = new Superchild(50,20,10,10,true);
        superchild->introduceYourself();
        superchild->saidSomething();
        superchild->whatYouWear();
        superchild->useSmellyDiaper();
        superchild->Grow();

        cout<< endl << endl <<"And now polymorphically"<< endl << endl;

        Superhero *heros[]={batman, spiderman, totallySpies, fairy, superchild };

        for(int i=0; i<5; ++i){
            heros[i]->introduceYourself();
            heros[i]->saidSomething();
            heros[i]->whatYouWear();
            cout<<endl;
        }

        delete batman;
        delete spiderman;
        delete totallySpies;
        delete fairy;
        delete superchild;

        return 0;
}
