real dirty, shared, exclusive, invalid, total;
@pre(invalid >= 1);
exclusive = 0;
dirty = 0;
shared = 0;
total = invalid;

while(1>= 0,
	
	(
		(((exclusive >= 0 and dirty >= 0) and (shared >= 0 and invalid >= 0)) 
		and 
		(((dirty + exclusive) + (shared + invalid)) == total)) 
	))

{

	ndif
	{

		[assume ( ( ((((dirty == 0 and shared == 0) and exclusive == 0))) and invalid >= 1) )]
		{	invalid = (invalid - 1);
			exclusive =[(dirty, shared, exclusive, invalid), 1];
		}

		[assume ((invalid >= 1 and dirty >= 1))]
		{
			invalid = (invalid - 1);
      		dirty = (dirty - 1);
      		shared = [(dirty, shared, exclusive, invalid), 1];
      	}

      	[assume ((invalid >= 1 and shared >= 1))]
      	{
      		invalid = (invalid - 1);
      		shared = [(dirty, shared, exclusive, invalid), 1];
      		exclusive = 0;
      	}

      	[assume ((invalid >= 1 and exclusive >= 1))]
      	{
      		invalid = (invalid - 1);
      		shared = [(dirty, shared, exclusive, invalid), 1];
      		exclusive = 0;

      	}

      	[assume(exclusive >= 1)]
      	{
      		exclusive = [(dirty, shared, exclusive, invalid), 1];
      		dirty = (dirty + 1);
      	}	

      	[assume(shared == 1)]
      	{
      		shared = (shared - 1);
      		exclusive =[(dirty, shared, exclusive, invalid), 1];
      	}

      	[assume(invalid >= 1)]
      	{
      		invalid = [(dirty, shared, exclusive, invalid), 1];
      		exclusive = 0;
      		shared = 0;
      		dirty = 1;
		}
	}
}
@post(((exclusive >= 0 and dirty >= 0) and (shared >= 0 and invalid >= 0)));
