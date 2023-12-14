,          ; Read first digit into first cell
-          ; Convert ASCII to integer
> +        ; Move to second cell and read the second digit
[->+<]     ; Add the digits together
< .        ; Move to the first cell and print the result

