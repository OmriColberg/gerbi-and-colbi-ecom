#ifndef __ACCOUNT_H
#define __ACCOUNT_H


class Account
{
private:
	char *account_name;
	char *password;
	Address *address;

	Account(char *m_acc_name, char *m_pass, Address m_addr)
	{
		account_name = new char[strlen(m_acc_name) + 1];
		strcpy(account_name, m_acc_name);
		password = new char[strlen(m_pass) + 1];
		strcpy(password, m_pass);
		*address = m_addr;
	}


};

#endif // __ACCOUNT_H