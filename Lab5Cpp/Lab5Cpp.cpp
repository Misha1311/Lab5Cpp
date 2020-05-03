#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

struct NameInfo
{
	string Name;

	string NameSite;

	void randomizer();
};


void NameInfo::randomizer()
{
	switch (rand() % 10)
	{
	case 0: Name = "Сабона Плюс"; break;
	case 1: Name = "Арт-Комплект"; break;
	case 2: Name = "Вектор"; break;
	case 3: Name = "Веста"; break;
	case 4: Name = "Гигабит"; break;
	case 5: Name = "Центр"; break;
	case 6: Name = "Забота"; break;
	case 7: Name = "Барс"; break;
	case 8: Name = "Кентавр"; break;
	case 9: Name = "Тритон"; break;
	default:Name = "Сабона Минус"; break;
	}

	switch (rand() % 10)
	{
	case 0: NameSite = "offical.com"; break;
	case 1: NameSite = "carshop.com"; break;
	case 2: NameSite = "carshoping.com"; break;
	case 3: NameSite = "quant.com"; break;
	case 4: NameSite = "couis.com"; break;
	case 5: NameSite = "charon.com"; break;
	case 6: NameSite = "car.com"; break;
	case 7: NameSite = "shop.com"; break;
	case 8: NameSite = "pizza.com"; break;
	case 9: NameSite = "mebli.com"; break;
	default:NameSite = "offical.com"; break;
	}
}

struct Address
{
	string country;
	string city;
	string district;
	string street;
	unsigned int house = 1;
	unsigned int apartment = 1;
	int ZIPcode = 1;
	void getAddress();
};


void Address::getAddress()
{
	switch (rand() % 10)
	{
	case 0: country = "Нарния"; break;
	case 1: country = "Бордурия"; break;
	case 2: country = "Ваканда"; break;
	case 3: country = "Галактическая Республика"; break;
	case 4: country = "Пресвитер Иоанн"; break;
	case 5: country = "Латверия"; break;
	case 6: country = "Мелнибонэ"; break;
	case 7: country = "Невервинтер"; break;
	case 8: country = "Руритания"; break;
	case 9: country = "Сильдавия"; break;
	default:country = "Шангри-Ла"; break;
	}


	switch (rand() % 10)
	{
	case 0: city = "Арканар"; break;
	case 1: city = "Вайс-Сити"; break;
	case 2: city = "Глупов"; break;
	case 3: city = "Город грехов"; break;
	case 4: city = "Изумрудный город"; break;
	case 5: city = "Лаленбург"; break;
	case 6: city = "Лапута"; break;
	case 7: city = "Либерти-Сити"; break;
	case 8: city = "Хилл-Вэлли"; break;
	case 9: city = "Чарн"; break;
	default:city = "Harvester"; break;
	}


	switch (rand() % 10)
	{
	case 0: district = "Центральный"; break;
	case 1: district = "Северный"; break;
	case 2: district = "Южный"; break;
	case 3: district = "Восточный"; break;
	case 4: district = "Западный"; break;
	case 5: district = "Древний"; break;
	case 6: district = "Современный"; break;
	case 7: district = "Цветочный"; break;
	case 8: district = "Подольский"; break;
	case 9: district = "Окнянский"; break;
	default:district = "Лиманский"; break;
	}



	switch (rand() % 10)
	{
	case 0: street = "Земляничная"; break;
	case 1: street = "Филатова"; break;
	case 2: street = "Гагарина"; break;
	case 3: street = "Жукова"; break;
	case 4: street = "Глушко"; break;
	case 5: street = "Восточная"; break;
	case 6: street = "Западная"; break;
	case 7: street = "Ленина"; break;
	case 8: street = "Солнечная"; break;
	case 9: street = "Гвардейская"; break;
	default:street = "Поскот"; break;
	}


	house = rand() % 99 + 1;
	apartment = rand() % 300;
	ZIPcode = 10000 + rand() % 100000;

}

struct Numberrand
{
	unsigned int duration = 0;

	unsigned int quantityemployees;

	unsigned int quantitybranches;

	void randnumber();
};

void Numberrand::randnumber()
{
	duration = rand() % 60;
	quantityemployees = rand() % 1000000;
	quantitybranches = rand() % 1000;
}

NameInfo name;
Address address;
Numberrand numberrand;

void output()
{
	cout << "Название компании: " << name.Name << endl;
	cout << "Название сайта: " << name.NameSite << endl;
	cout << "Страна: " << address.country << endl;
	cout << "Город: " << address.city << endl;
	cout << "Район: " << address.district << endl;
	cout << "Улица: " << address.street << endl;
	cout << "Дом: " << address.house << endl;
	cout << "Квартира: " << address.apartment << endl;
	cout << "Почтовый индекс: " << address.ZIPcode << endl;
	cout << "Продолжительность пребывание на мировом рынке: " << numberrand.duration << endl;
	cout << "Количество сотрудников:" << numberrand.quantityemployees << endl;
	cout << "Количество филиалов: " << numberrand.quantitybranches << endl;
	cout << "--------------------------------------------------------------" << endl;

}

void lowlevel()
{
	ofstream out;
	out.open("info.txt");

	int r = 0;
	r = 10 + rand() % 50;

	for (int i = 0; i < r; i++)
	{
		name.randomizer();
		address.getAddress();
		numberrand.randnumber();
		output();

		if (numberrand.quantityemployees >= 10000)
		{
			out << "Название компании: " << name.Name << endl;
			out << "Название сайта: " << name.NameSite << endl;
			out << "Страна: " << address.country << endl;
			out << "Город: " << address.city << endl;
			out << "Район: " << address.district << endl;
			out << "Улица: " << address.street << endl;
			out << "Дом: " << address.house << endl;
			out << "Квартира: " << address.apartment << endl;
			out << "Почтовый индекс: " << address.ZIPcode << endl;
			out << "Продолжительность пребывание на мировом рынке: " << numberrand.duration << endl;
			out << "Количество сотрудников:" << numberrand.quantityemployees << endl;
			out << "Количество филиалов: " << numberrand.quantitybranches << endl;
			out << "--------------------------------------------------------------" << endl;
		}
	}
	out.close();
}



void mediumlevel()
{
	ifstream in("f.txt");
	fstream inout("h.txt");
	ofstream out("g.txt");

	int F, L;
	while (in >> F)
	{
		if (F < 0)
		{
			inout << F << " ";
		}
	}
	in.close();
	inout.close();

	ifstream in1("f.txt");
	fstream inout1("h.txt");
	while (in1 >> L)
	{
		if (L > 0)
		{
			inout1 >> F;
			out << L << " " << F << " ";
		}
	}
	in1.close();
	inout1.close();
	out.close();
}


void highlevel()
{
	ofstream matrix1("1.txt");
	ofstream matrix2("2.txt");
	ofstream matrix3("3.txt");


	const int n = 3;
	const int m = 5;
	const int q = 1;
	int count = 0;
	int k = 0;
	k = rand() % 5;
	int i, j, s;
	int a[m][n], b[m][q];

	for (s = 0; s < k; s++)
	{
		count++;

		cout << "\nМатрица номер " << count << endl;
		matrix3 << "\nМатрица номер " << count << endl;
		cout << "\nМатрица 1:\n";
		matrix1 << "\nМатрица 1:\n";
		matrix3 << "\nМатрица 1:\n";
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				a[i][j] = rand() % 10;
				matrix1 << "  " << a[i][j] << "\t";
				matrix3 << "  " << a[i][j] << "\t";
				cout << "  " << a[i][j] << "\t";
			}
			matrix1 << endl;
			matrix3 << endl;
			cout << endl;

		}
		cout << "\nМатрица 2:\n";
		matrix2 << "\nМатрица 2:\n";
		matrix3 << "\nМатрица 2:\n";
		for (i = 0; i < m; i++)
		{
			b[i][q] = rand() % 10;
			matrix2 << "  " << b[i][q] << "\t";
			matrix3 << "  " << b[i][q] << "\t";
			cout << "  " << b[i][q] << "\t";
			matrix2 << endl;
			matrix3 << endl;
			cout << endl;
		}

		matrix3 << "\nМатрица 1 - Матрица 2:\n";
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				matrix3 << "  " << a[i][j] - b[i][q] << "\t";
			}
			matrix3 << endl;
		}
	}
}


int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	lowlevel();
	mediumlevel();
	highlevel();
}

