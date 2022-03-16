/***  KNOWLEDGE IS POWER  ***/

fun main() {
    repeat(readLine()!!.toInt()) {
        val n = readLine()!!.toInt()
        val x = n/3
        if(n%3 == 0) println("21".repeat(x))
        else if(n%3 == 1) println("1" + "21".repeat(x))
        else println("21".repeat(x) + "2")
    }
}
