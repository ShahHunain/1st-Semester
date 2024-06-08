function calculate() {
    let input = document.getElementById("input").value;
    let output = document.getElementById("output").value;
    let input_currency = document.getElementById("input_currency").value;
    let output_currency;

    if (input == "USD" && output == "PKR") {
        output_currency = input_currency * 274;
    } else if (input == "USD" && output == "EURO") {
        output_currency = input_currency * 0.5;
    } else if (input == "PKR" && output == "EURO") {
        output_currency = input_currency * 296;
    }

    output_currency = Number.parseFloat(output_currency);
    document.getElementById("output_currency").value = output_currency;

    showPrimeAndEven(output_currency);
}

function showPrimeAndEven(n) {
    let prime = [];
    let even = [];

    for (let i = 0; i <= n; i++) {
        if (i % 2 === 0) {
            even.push(i);
        }
    }

    //document.getElementById("Prime Numbers").textContent = prime.join(" , ");
    document.getElementById("Even Numbers").textContent = even.join(" , ");
}