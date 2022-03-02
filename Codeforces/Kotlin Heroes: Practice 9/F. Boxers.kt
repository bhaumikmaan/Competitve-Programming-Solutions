/***  KNOWLEDGE IS POWER  ***/

fun main() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(' ').map { it.toInt() }.sorted()
    val ans = hashSetOf<Int>()

    for (i in a) 
    {
        if (i == 0 && i !in ans) 
        {
            ans.add(0)
        } 
        else
        {
            if (i != 1 && i - 1 !in ans) 
            {
                ans.add(i - 1)
            } 
            else if (i !in ans) 
            {
                ans.add(i)
            } 
            else if (i != 15_000 && i + 1 !in ans) 
            {
                ans.add(i + 1)
            }
        }
    }
    println(ans.size)
}
