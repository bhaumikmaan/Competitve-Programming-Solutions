/***  KNOWLEDGE IS POWER  ***/

fun main(args: Array<String>) {
    val n = readLine()!!.toInt()
    val s = readLine()!!
    val t = readLine()!!
    val a = IntArray(n)
    for (i in 0 until n) 
    {
        a[i] += s[i] - 'a'
        a[i] += t[i] - 'a'
    }
    for(i in n - 1 downTo 1)
    {
        if(a[i] >= 26)
        {
            a[i-1]++
            a[i] -= 26
        }
    }
    for(i in 0 until n)
    {
        if(a[i] % 2 == 1)
        {
            a[i+1]+=26
        }
        a[i] /= 2;
    }
    for(i in n - 1 downTo 1){
        while(a[i] >= 26)
        {
            a[i-1]++
            a[i] -= 26
        }
    }
    for(i in 0 until n)
    {
        print((a[i] + 'a'.toInt()).toChar())
    }
}
