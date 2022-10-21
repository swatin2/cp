class money
{
	double rupees;
	double paise;
	public:
	money()
	{
		rupees=20;
		paise=50;
	}
	money(double r,double p)
	{
		rupees=r;
		paise=p;
	}

	money operator+( money& obj)
	{
	      return money (rupees+obj.rupees , paise+obj.paise);
	}

	double cash() const
	{
               double cash=rupees+paise/100;
	       return cash;
	}
	
	~money()
	{
	}
		
};
