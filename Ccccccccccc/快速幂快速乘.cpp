long long MUL(long long a, long long b, long long MOD)
{
	long long res = 1;
	while (b)
	{
		if (b & 1)
		{
			res = (res * a) % MOD;
		}
		a = (a * a) % MOD;
		b >>= 1;
	}
	return res;
}




long long MUL(long long a, long long b, long long MOD)
{
	long long res = 0;
	while (b)
	{
		if (b & 1)
		{
			res = (res + a) % MOD;
		}
		a = (a + a) % MOD;
		b >>= 1;
	}
	return res;
}