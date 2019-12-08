#ifndef __FEEDBACK_H
#define __FEEDBACK_H


class Feedback
{
private:
	Buyer given_buyer;
	Date *date;
	char *review;

	Feedback(Buyer m_buyer, Date m_date, char *m_review)
	{
		given_buyer = Buyer(m_buyer);
		*date = Date(m_date);
		review = new char[strlen(m_review) + 1];
		strcpy(review, m_review);
	}

};

#endif // __FEEDBACK_H