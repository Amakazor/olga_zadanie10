#include <iostream>
/*ZADANIE 10*/
/*Temat: Referencje*/
void switchyswitch(int& a, int& b)
{	
	int temporary = a;
	a = b;
	b = temporary;
}
bool sort_5(int& jeden, int& dwa, int& trzy, int& cztery, int& piec)
{
	if (jeden != dwa && jeden != trzy && jeden != cztery && jeden != piec && dwa != trzy && dwa != cztery && dwa != piec && trzy != cztery && trzy != piec && cztery != piec)
	{
		while (!(jeden < dwa && dwa < trzy && trzy < cztery && cztery < piec))
		{
			if (jeden > dwa) switchyswitch(jeden, dwa);
			if (dwa > trzy) switchyswitch(dwa, trzy);
			if (trzy > cztery) switchyswitch(trzy, cztery);
			if (cztery > piec) switchyswitch(cztery, piec);
		}
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	/*ZADANIE 10.1*/
	//Utwórz funkcję typu bool o nazwie sort_5()
	//1. Funkcja przyjmuje 5 argumentów
	//2. Argumentami są liczby całkowite i/lub referencje do liczb całkowitych
	//3. Na potrzeby tej funkcji napisz kolejną funkcję, zamieniającą dwie liczby całkowite wartościami, podobną do tej z przykładów do zadania 9. Ale nie podglądaj w nim!
	//4. Funkcja przetwarza zamienia argumenty wartościami tak długo aż ich wartości będą w kolejności rosnącej, to jest: argument pierwszy miał najnijższą wartość, a argument piąty najwyższą
	//5. Sortowanie następuje, jeśli w podanych pięciu argumentach nie ma powtarzających się wartości. Jeśli takie są, to funkcja nie sortuje i zwraca false
	//6. Jeśli sortowanie nastąpiło to funkcja zwraca true
	//7. Przetestuj funkcję dla następujących zestawów liczb:
	//	 10 7 8 4 2
	//   167 850 34 -15 0
	//   758 57 8 -56 57
	//7.1. Wypisz liczby przed sortowaniem
	//7.2. Sprawdź czy nastąpiło sortowanie
	//7.3. Jeśli tak to wypisz posortowane liczby, jeśli nie to odpowiedni komunikat
	int jeden = 758;
	int dwa = 57;
	int trzy = 8;
	int cztery = -56;
	int piec = 57;
	 

	std::cout << "Twoje liczby przed sortowaniem: \n" << jeden << "\n" << dwa << "\n" << trzy << '\n' << cztery << '\n' << piec << "\n";
	bool result = sort_5(jeden, dwa, trzy, cztery, piec);

	if(result)
	{
		std::cout << "Twoje liczby po posortowaniu to: \n" << jeden << "\n" << dwa << "\n" << trzy << '\n' << cztery << '\n' << piec << "\n";
	}
	else
	{
		std::cout << "Nie nastapilo sortowanie. srl. \n\n";
	}
		
}
