
void obrahandvivyd(double sum, int n) {

	double ser; // змінна для середнього арифметичного

	ser = sum / n; // рахуємо середнє арифметичне

	system("cls"); // очищаємо вікно консолі




	cout << "Arithmetic mean: " << ser << endl << endl; // виводимо середнє арифметичне значення на екран

	r << ser; //записуємо середнє арифметичне значення у файл


	f.close();
	r.close(); // закриваємо файли

	system("pause");


}