real modified, shared, exclusive, invalid, total;
@pre(invalid >= 1);
exclusive = 0;
modified = 0;
shared = 0;
total = invalid;
while (1>=0 , (
    (
        ((exclusive >= 0 and shared >= 0) and (modified>=0 and invalid >= 0)) 
        and 
        (((modified+shared)+(exclusive+invalid)) == total)
    )
    )) {

    ndif
    {
        [assume(invalid >= 1)]{
        // shared = ((shared + exclusive) + (modified + 1));
        shared = [(invalid, modified, shared, exclusive), 1];
        invalid = (invalid - 1);
        exclusive = 0;    
        modified = 0;
        }

        [assume(exclusive >= 1)]{
        exclusive = (exclusive - 1);
        modified = (modified + 1);
        }

        [assume(shared >= 1)]{
        // invalid = ((invalid + modified) + ((exclusive + shared) - 1));
        invalid = [(invalid, modified, shared, exclusive), 1];
        shared = 0;
        exclusive = 1;
        modified = 0;
        }

        [assume(invalid >= 1)]{
        // invalid = ((invalid + modified) + ((shared + exclusive) - 1));
        invalid = [(invalid, modified, shared, exclusive), 1];
        shared = 0;
        exclusive = 1;
        modified = 0;
        }
    }
}
@post(1>=0);