/***  KNOWLEDGE IS POWER  ***/

import java.util.*
import kotlin.collections.ArrayList

fun main() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(' ').map { it.toInt() }.sorted()
    val inc = ArrayList<Int>()
    val dec = ArrayList<Int>()
    var flag = true
    a.forEachIndexed { index, it ->
        if (index >= 2 && it == a[index - 2]) 
        {
            flag = false
        } 
        else if (index >= 1 && it == a[index - 1]) 
        {
            dec.add(it)
        } 
        else 
        {
            inc.add(it)
        }
    }
    if (flag == false) 
    {
        println("NO")
    } 
    else 
    {
        println("YES")
        println(inc.size)
        inc.forEach {
            print(it)
            print(" ")
        }
        println()
        println(dec.size)
        dec.asReversed().forEach {
            print(it)
            print(" ")
        }
    }
}
