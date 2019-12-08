#ifndef __ADDRESS_H
#define __ADDRESS_H


class Address
{
private:
	char *country;
	char *city;
	char *street;
	int app_number;

	Address(char *m_country, char *m_city, char *m_street, int m_app_num)
	{
		country = new char[strlen(m_country) + 1];
		strcpy(country, m_country);
		city = new char[strlen(m_city) + 1];
		strcpy(city, m_city);
		street = new char[strlen(m_street) + 1];
		strcpy(street, m_street);
		app_number = m_app_num;
	}

	~Address()
{
	delete []country;
	delete []city;
	delete []street;
}
public:

	char* getCountry()const
	{
		return country;
	}
	char* getCity()const
	{
		return city;
	}

	char* getStreet()const
	{
		return street;
	}

	int getApparment()const
	{
		return app_number;
	}


};

#endif // __ADDRESS_H
