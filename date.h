#ifndef __DATE_H
#define __DATE_H


class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int m_year, int m_month, int m_day)
	{
		setYear(m_year);
		setMonth(m_month);
		setDay(m_day);

	}
	Date(const Date &d)
	{
		setYear(d.year);
		setMonth(d.month);
		setDay(d.day);
	}
	void setYear(int m_year) { year = m_year; }
    void setMonth(int m_month) { month = m_month; }
	void setDay(int m_day) { day = m_day; }
};

#endif // __DATE_H      