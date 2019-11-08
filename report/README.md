# 作業2 報告

學生 : `王祥任`
學號 : `0616309`

---
## 概要

* 本次作業要實作`P`語言的`LALR(1)` `parser`。
* 使用`yacc`並撰寫`grammar`來生成。
* 注意，本次並未處理語意。
* 我們`Parser`僅須注意是句法`Syntax`是否正確即可。

    ### 實作流程
    1. 定義`token`
    2. 生成`y.tab.h` `y.tab.c` 
    3. 修改`scanner.l` 
    4. 撰寫`grammar`
___

## 定義`token`
* 必須在`parser.y`中事先以`%token`開頭，定義會從`scanner`中傳遞的`token`。
    ```=
    %token <token_name_0> <token_name_1> <token_name_2> ...
    %token <token_name_3> <token_name_4> ...
    ...
    ```
*  `Delimiter` `Operator` `Keyword`
   
   |lexeme|token||lexeme|token||lexeme|token|
    |:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
    |`,`|COMMA||`+`|PLUS||`array`|KWarray|
    |`;`|SEMICOLON||`-`|MINUS||`begin`|KWbegin|
    |`:`|COLON||`*`|STAR||`boolean`|KWboolean|
    |`(`|L_PARENTHESES||`/`|SLASH||`def`|KWdef|
    |`)`|R_PARENTHESES||`mod`|MOD||`do`|KWdo|
    |`[`|L_BRACKETS||`:=`|ASSIGN||`else`|KWelse|
    |`]`|R_BRACKETS||`<`|LT||`end`|KWend|
    ||||`<=`|LE||`false`|KWfalse|
    ||||`<>`|NEQ||`for`|KWfor|
    ||||`>=`|GE||`integer`|KWinteger|
    ||||`>`|GT||`if`|KWif|
    ||||`=`|EQ||`of`|KWof|
    ||||`and`|AND||`print`|KWprint|
    ||||`or`|OR||`read`|KWread|
    ||||`not`|NOT||`real`|KWreal|
    |||||||`string`|KWstring|
    |||||||`then`|KWthen|
    |||||||`to`|KWto|
    |||||||`true`|KWtrue|
    |||||||`return`|KWreturn|
    |||||||`var`|KWvar|
    |||||||`while`|KWwhile|

* `Identifier`

    |lexeme|token|
    |:-:|:-:|
    |`<id>`|ID|

* `Integer (decimal/octal)` `Floating-Point` `Scientific Notation`

    |lexeme|token||lexeme|token||lexeme|token|
    |:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
    |`<decimal>`|DEC_INT||`<FP>`|FLOAT||`<Scientific>`|SCIENTIFIC|
    |`<octal>`|OCT_INT|

* `STRING`

    |lexeme|token|
    |:-:|:-:|
    |`<String>`|STRING|

___
## 生成`y.tab.h` `y.tab.c` 
* 生成`y.tab.h` `y.tab.c`
    
    ```bash=
    $ yacc -d parser.y
    ```
    * 在`parser.y`中定義完`token`後，輸入以上指令便可以生成`yacc`和`lex`的溝通介面。

___
## 修改`scanner.l` 
* 加入`y.tab.h`
    
    ```c++=
    #include "y.tab.h"
    ```
* 依照我們定義的`TOKEN`，修改`scanner.l`
* 使`scanner`可以傳遞這項`Token`給`parser`
    ```lex=
    "," { TOKEN_CHAR(','); return COMMA; }
    ```
---
## `Syntax`定義
* 注意，本次並未處理語意。
* 我們`Parser`僅須注意是句法`Syntax`是否正確即可。

___
## PROGRAM UNIT

### Program
* 
    ```
    identifier ; 
    <zero or more variable and constant declaration>
    <zero or more function declaration>
    <one compound statement>
    end identifier
    ```
    
    * 有關`variable and constant declaration`請參考[`DATA TYPE and DECLARATIONS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Variable)
    * 有關`function declaration`請參考[`PROGRAM UNIT-Function`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Function)
    * 有關`compound statement`請參考[`STATEMENTS-compound`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#compound)
    
### Function
* 
    ```
    identifier ( <zero or more formal arguments> ): scalar_type;
    <one compound statement>
    end identifier
    ```

    * 有關`compound statement`請參考[`STATEMENTS-compound`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#compound)
    * 有關`scalar type`請參考[`DATA TYPE and DECLARATIONS-Variables`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Variable)

    * `Function`又可再依照回傳的有無分為兩種
        
        1. `Normal Function`
        2. `Procedure Function`

    * `identifier_list`長得像這樣：
        ```
        ID, ID, ID, ... , ID
        ```
    * `formal argument`長得像這樣：
        
        ```
        identifier_list : type
        ```
      複數的`formal arguments`以以下形式串聯在一起：
        
        ```
        arg; arg; arg; ... ; arg
        ```

___
## DATA TYPE and DECLARATIONS
### Variable
* 
    ```cpp
    var identifier_list: scalar_type;

    var identifier_list: array integer_constant to integer_constant of type;
    ```
    * 有關`identifier_list`請參考[`PROGRAM UNITS-Function`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Function)
    * `type`總計五種，可分為兩大類：

        > * `scalar_type`： `integer`, `real`, `string`, `boolean`
        > * `structured_type`： `array`
    
      所以，以下情況是會發生的：
        ```p
        var Arr2D: array 0 to 3 of array 0 to 3 of integer;
        ```
        * 需要特別處理類似的型別宣告。
      
      故我們可以重新將`array`的宣告理解為以下情況：
        ```
        var identifier_list: <array...of> ... <array...of> scalar_type 
        ```
        
    * `integer_constant`指整數型別的數值：
        * `DEC_INT`, `OCT_INT`


### Constant
* 
    ```
    var identifier_list: literal_constant;
    ```
    * 有關`identifier_list`請參考[`PROGRAM UNITS-Function`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Function)

    * `literal_constant`即直接賦予字面常數，大致上為以下幾種：
        
        |Type|Value|
        |:-:|:-:|
        |DEC_INT|123| 
        |OCT_INT|0123|
        |FLOAT|1.23|
        |SCIENTIFIC|1.2E3|
        |STRING|"123"|
        |KWtrue|true|
        |KWfalse|false|

___
## STATEMENTS
* 有七大種類，以下逐一介紹。

### compound
* 
    ```
    begin
    <zero or more variable and constant declaration>
    <zero or more statements>
    end
    ```
    * 有關`variable and constant declaration`請參考[`DATA TYPE and DECLARATIONS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Variable)
    * 有關`statements`請參考[`STATEMENTS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#STATEMENTS)

### simple
* 
    ```cpp
    variable_reference := expression;
    
    print variable_reference;
    
    print expression;

    read variable_reference;
    ```
    * 有關`expression`請參考[`STATEMENTS-expressions`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#expressions)
    * `variable_reference`可以直接是`ID`或者是`array_reference`。
    * `array_reference`長得像這樣：
        
        ```
        ID [expression] [expression] [...]
        ```
    * 在`print`後所接的部分，其實`variable_reference`已經被包含在`expression`中了
        * 故，其實是應該消去這重複撰寫的部分(`print variable_reference`)
    
### expressions
* 主要是數學運算的表達，有以下幾種運算子，依優先序排序：
    
    |Type|Operator|
    |:-:|:-:|
    |negative|**`-`**|
    |addition|**`+`**|
    |subtraction|**`-`**|
    |multiplication|**`*`**|
    |division|**`/`**, **`mod`**|
    |relational|**`<`**, **`<=`**, **`<>`**, **`>=`**, **`>`**, **`=`**|
    |logical|**`and`**, **`or`**, **`not`**|
    
    * `()`也會出現在運算式中。
    * `-`可以有兩種使用方法
    
        1. `Binary Subtraction` : `a - b`
        2. `Unary Negation` : `-a`
    
    * `not`使用方法為`not expressions`
    * 可以合法用在`expressions`中的物件為以下幾種：
        ```yacc=
        valid_components : L_PARENTHESES expressions R_PARENTHESES 
                         | literal_constant
                         | ID
                         | function_invocation
                         | array_reference
                         ;
        ```
        * 有關`literal_constants`請參考[`DATA TYPE and DECLARATIONS-Constant`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Constant)
        * 有關`function_invocation`請參考[`STATEMENTS-function invocation`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#function-invocation-procedure-call)
        * 有關`array_reference`請參考[`STATEMENTS-simple`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#simple)
    
### conditional
* 
    ```
    if expression then
    <zero or more statements>
    else
    <zero or more statements>
    end if
    ```
    ```
    if exprression then <zero or more statements> end if
    ```
    * 有關`statements`請參考[`STATEMENTS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#STATEMENTS)
    * 有關`expression`請參考[`STATEMENTS-expressions`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#expressions)

### while
* 
    ```
    while expression do
    <zero or more statements>
    end do
    ```
    * 有關`statements`請參考[`STATEMENTS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#STATEMENTS)
    * 有關`expression`請參考[`STATEMENTS-expressions`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#expressions)
### for
* 
    ```
    for identifier := integer_constant to integer_constant do
    <zero or more statements>
    end do
    ```
    * 有關`integer_constants`請參考[`DATA TYPE and DECLARATIONS-Variables`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#Variable)
    * 有關`statements`請參考[`STATEMENTS`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#STATEMENTS)
### return
* 
    ```
    return expression ;
    ```
    * 有關`expression`請參考[`STATEMENTS-expressions`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#expressions)

### function invocation (procedure call)
* 
    ```c++=
    /* function invocation */
    identifier (<expressions separated by zero or more comma>)
    
    /* procedure call */
    identifier (<expressions separated by zero or more comma>) ;
    ```
    * 有關`expression`請參考[`STATEMENTS-expressions`](https://hackmd.io/Pr5iL7VLRb2QECnPLN-lWw?view#expressions)
    * 請注意 **`;`**
        * 嚴格來說，我們可將`function invocation`和`procedure call`分開：
        * 無`;` -> `function invocation`可以存在於運算式中。
        * 有`;` -> `procedure call`是被獨立呼叫者。

___
## Conclusion
* 有了`parser`，我們就可以做到最基礎的句法檢查。
* 本次實作的難題基本上出在消去`ambiguous`。
    * 諸如`expressions`，`function invocations`等，若直接依照字面結構處理，很容易會出現`conflict`。
___
