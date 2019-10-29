/**
 * general2.p: general case 2
 */
//&T-
general2;

recursive( index: integer ): integer;
begin
        if ( index = 1 ) then  
                return 1;
        else
                return recursive( index-1 )+index;
        end if
end 
end recursive

begin
        var a : integer;
        read a;
        print recursive(a);
end 
end general2
