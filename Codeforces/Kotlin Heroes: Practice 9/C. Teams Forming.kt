/***  KNOWLEDGE IS POWER  ***/

fun main() {
    readLine()
    var a = readLine()!!.split(" ").map {it.toInt()}
    a = a.sorted()
    var ans = 0
    for (i in 0..((a.size - 2) / 2)) 
    {
        ans += a[2 * i + 1] - a[2 * i]
    }
    println(ans)
}
