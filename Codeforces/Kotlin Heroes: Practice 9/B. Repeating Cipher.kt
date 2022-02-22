/***  KNOWLEDGE IS POWER  ***/

import java.io.*
import java.math.*
import java.security.*
import java.text.*
import java.util.*
import java.util.concurrent.*
import java.util.function.*
import java.util.regex.*
import java.util.stream.*
import kotlin.collections.*
import kotlin.comparisons.*
import kotlin.io.*
import kotlin.jvm.*
import kotlin.jvm.functions.*
import kotlin.jvm.internal.*
import kotlin.ranges.*
import kotlin.sequences.*
import kotlin.math.*

fun main(args: Array<String>) {
    readLine()
    val n = readLine()!!

    var result = ""
    var index = 0
    var count = 1
    while (true) 
    {
        if (index < n.length) 
        {
            result += n[index]
            index += count
            count++
        } 
        else 
        {
            break
        }
    }
    println(result)
} 		     	  				 			
