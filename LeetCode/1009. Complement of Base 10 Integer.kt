/***  KNOWLEDGE IS POWER  ***/

class Solution {
    fun bitwiseComplement(n: Int): Int {
        return n.xor(1.shl(n.toString(2).length) - 1)
    }
}
