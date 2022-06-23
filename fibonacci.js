let number = prompt("enter index of fibonacci please :")

function fibonacci(x) {
    if (x == 0)
        return 0
    else if (x == 1)
        return 1
    else
        return fibonacci(x - 1) + fibonacci(x - 2)
}

console.log(`the ${number}th fibonacci number is ${fibonacci(number)}`)
