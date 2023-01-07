real dirty, shared, exclusive, invalid, total;
@pre(invalid>=1);
exclusive = 0;
dirty = 0;
shared = 0;
total = invalid;
// We need a strong invariant so that we can add holes in the program
while (1>=0,  ( ( ((((dirty >= 0 and shared >= 0) and exclusive >= 0))) and invalid >= 0) and ( ( (dirty + shared) + (exclusive + invalid)) == total))){
//while (1>=0, ( ([(exclusive, dirty, shared, invalid), 1] >= 0 and  [(exclusive, dirty, shared, invalid), 1] >= 0) and ([(exclusive, dirty, shared, invalid), 1] >= 0 and  [(exclusive, dirty, shared, invalid), 1] >= 0) )) {
// while (1>=0, ( ([(exclusive), 1] >= 0 and  [(dirty), 1] >= 0) and ([(shared), 1] >= 0 and  [(invalid), 1] >= 0) )) {
  ndif 
  {
      [assume ( ( ((((dirty == 0 and shared == 0) and exclusive == 0))) and invalid >= 1) )]
      {
        invalid = (invalid - 1);
        exclusive = (exclusive + 1);    
      }

      [assume ((invalid >= 1 and dirty >= 1))]

      {
        invalid = (invalid - 1);
        dirty = (dirty - 1);
        shared = [(shared), 1];
      }

      [assume ((invalid >= 1 and shared >= 1))]{
          invalid = (invalid - 1);
          shared = [(shared, exclusive), 1];
          exclusive = 0;
      }

      [assume ((invalid>=1 and exclusive >= 1))]{
        invalid = (invalid - 1);
        shared = [(shared, exclusive), 1];
        exclusive = 0;
      }

      [assume (exclusive >= 1)]{
        exclusive = [(shared, exclusive), 1];
        dirty = (dirty + 1);
      }

      
      [assume (shared >= 1)]{
        invalid = ((invalid + shared) - 1);
        dirty = (dirty + 1);
        shared = 0;
      }
      
      [assume (invalid >= 1)]{
        invalid = ((invalid + exclusive) + ((dirty + shared) - 1));
        exclusive = 0;
        shared = 0;
        dirty = 1;
      }
      [assume(dirty >= 1)]{
        dirty = (dirty - 1);
        invalid = (invalid + 1);
      }
      [assume(shared >= 1)]{
        shared = [(shared), 1];
        invalid = (invalid + 1);
      }
      [assume(exclusive >= 1)]{
        exclusive =[(exclusive), 1];
        invalid = (invalid + 1);
      }
  }
}
@post( ( ((((dirty >= 0 and shared >= 0) and exclusive >= 0))) and invalid >= 0) );