/**
 * err2.p: local variable declaration after statement(s)
 */
//&T-
err2;

var globalA: integer;

begin

        globalA := 123;

        var b: integer;

        b := globalA*globalA;

end
end err2
