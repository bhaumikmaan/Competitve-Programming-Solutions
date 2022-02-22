/***  KNOWLEDGE IS POWER  ***/

fun main() {
    repeat(readLine()!!.toInt()){
        readLine()
        val a = readLine()!!.split(" ").map{it.toInt()}
        if(a[0] != a[1])
        { 
            if(a[0] != a[2]) 
              println(1)
            else 
              println(2)
        }
        else
        {
            println(a.indexOf(a.find{it!=a[0]})+1)
        }
    }
}
