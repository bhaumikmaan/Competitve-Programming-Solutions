/***  KNOWLEDGE IS POWER  ***/

import java.util.*
import kotlin.collections.ArrayList
import java.util.Scanner

fun main() {
    val read = Scanner(System.`in`)
    val n = read.nextInt()
    val k = read.nextInt()
    if (n < k) 
    {
        println("NO")
        return
    }
    val arr = Array(32){0}
    for (i in 0 until 32) 
    {
        if ((1.shl(i) and n) != 0) 
        {
            arr[i]++
        }
    }
    var l = arr.sum()
    if (l > k) 
    {
        println("NO")
        return
    }
    var i = 31
    while (l != k) 
    {
        if(arr[i] == 0) 
        {
            i--
        }
        else
        {
            arr[i]--
            arr[i - 1] += 2
            l++
        }
    }
    val lst = mutableListOf<Int>()
    for (j in 0 until 32) 
    {
        for (_i in 0 until arr[j]) 
        {
            lst.add(1.shl(j))
        }
    }
    println("YES")
    println(lst.joinToString(" "))
}
