/***  KNOWLEDGE IS POWER  ***/

func bitwiseComplement(n int) int {
    a := 2
    for a - 1 < n 
    {
        a *= 2
    }
    return a - 1 - n
}
