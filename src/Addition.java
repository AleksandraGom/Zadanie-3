public interface Addition {

    public void saidSomething();  // Polimorfizm - mechanizm dający możliwość posługiwania się pewnym zbiorem akcji
    public void whatYouWear();    // za pomocą jednego interfejsu. Metody użyte w interfejsie Addiction dla każdej klasy
    public void introduceYourself(); // są takie same, mimo że w każdej klasie poszczególna metoda będzie
                                     //  przechowywała(wyświetlała) różne dane. Dzięki polimorfizmowy wystarczy utworzyć jedną metodę
                                     // która będzie działała we wszystkich klasach.
                                     // Deklaracja interfejsu rozpoczyna się słowem kluczowym "interface" i zawiera jedynie stałe i
                                     // metody abstrakcyjne. Aby użyć interfejsu, klasa konkretna stosuje słowo kluczowe
                                     // "implements" do wskazania implementowanego interfejsu, a następnie deklaruje
                                     // wszystkie metody interfejsu o dokładnie takiej samej sygnaturze jak podana w interfejsie.
                                     // Słowo kluczowe "implements" wraz z nazwą interfejsu pojawia się na końcu pierwszego
                                     // wiersza deklaracji klasy, tak jak np. w klasie Superchild w linijce 1.
}
