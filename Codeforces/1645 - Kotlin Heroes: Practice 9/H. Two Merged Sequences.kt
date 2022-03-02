/***  KNOWLEDGE IS POWER  ***/

import java.lang.Math.abs
import java.util.*
import kotlin.*
import kotlin.math.max
import kotlin.math.min
import kotlin.system.exitProcess


fun main() {
    var n = readLine()!!.toInt()
    var a = readLine()!!.split(" ").map { it.toInt() }
    var x = mutableListOf<Int>()
    var y = mutableListOf<Int>()
    for (i in 0 until n) 
    {
        if (i == n - 1) 
        {
            when 
            {
                (x.size == 0 || a[i] > a[x[x.size - 1]]) -> {
                    x.add(i)
                }
                (y.size == 0 || a[i] < a[y[y.size - 1]]) -> {
                    y.add(i)
                }
                else -> {
                    println("NO")
                    return
                }
            }
            continue
        }


        if ((x.size == 0 || a[i] > a[x[x.size - 1]]) && (y.size == 0 || a[i] < a[y[y.size - 1]])) 
        {
            if (a[i] < a[i + 1]) 
            {
                x.add(i)
            } 
            else 
            {
                y.add(i)
            }
        } 
        else if ((x.size == 0 || a[i] > a[x[x.size - 1]])) 
        {
            x.add(i)
        } 
        else if ((y.size == 0 || a[i] < a[y[y.size - 1]]))
        {
            y.add(i)
        } 
        else 
        {
            println("NO")
            return
        }
    }

    println("YES")
    var ans = arrayOfNulls<Int>(n)
    for (i in x.indices){
        ans[x[i]] = 0
    }
    for (i in y.indices){
        ans[y[i]] = 1
    }

    for (i in 0 until n){
        print("${ans[i]!!} ")
    }
    println()
}
