,          ; Read first digit into first cell
-          ; Convert ASCII to integer
> +        ; Move to second cell and read the second digit
[->>+<<]   ; Multiply the digits and create a copy
> -[       ; Move to the second cell and subtract 1
  <<[->>>+<<<]>>>  ; Move the copy back to the first cell
  >>>-             ; Clear the second cell
  <[>>+<<-]>>[>]   ; Move the result back to the first cell
<<]         ; End loop
< .        ; Move to the first cell and print the result

