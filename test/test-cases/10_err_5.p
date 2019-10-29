/**
 * err5.p: LHS of assignment cannot be the result of funcion invocation
 */
//&T-
err5;

func():integer;
begin
        return 321;
end
end func

begin
        func() := 123; 
end
end err5
