/**
 * expr.p: expression
 */
//&T-
expr;

foo( a, b: integer ): integer;
begin
	return ----a*b;
end
end foo

begin

        var a, b: integer;
        var L1darray: array 1 to 5 of integer;
       
        a := 2;
        b:= 3;
        L1darray[0] := 123;
	  
        print 1+2*(3+4);

        if a*3+1 <> b*4 mod 123 then
                print "test";
        end if
	
	print foo(2*4,3) * a * L1darray[0];

end
end expr
