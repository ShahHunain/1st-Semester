function calculate() {
    var Input_Currency = document.getElementById("Input_Currency").value;
    var Output_Currency = document.getElementById("Output_Currency").value;
    var Enter_Amount = parseFloat(document.getElementById("Enter_Amount").value);
    var Calculated_Amount;

    if (Input_Currency === "US_Dollar" && Output_Currency === "Pakistani_Rupees") {
        Calculated_Amount = Enter_Amount * 276.88;
    } else if (Input_Currency === "Euro" && Output_Currency === "Pakistani_Rupees") {
        Calculated_Amount = Enter_Amount * 292.93;
    } else if (Input_Currency === "US_Dollar" && Output_Currency === "Euro") {
        Calculated_Amount = Enter_Amount * 0.95;
    }

    document.getElementById("Calculated_Amount").value = Calculated_Amount;
    showPrimeAndEvenNumbers(Math.floor(Enter_Amount));
}

function isPrime(n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 === 0 || n % 3 === 0) return false;

    for (var i = 5; i * i <= n; i += 6) {
        if (n % i === 0) return false;
    }

    return true;
}

function showPrimeAndEvenNumbers(x) {
    var Prime_Numbers = [];
    var Even_Numbers = [];

    for (var i = 2; i <= x; i++) {
        if (i % 2 === 0) {
            Even_Numbers.push(i);
        }
        if (isPrime(i)) {
            Prime_Numbers.push(i);
        }
    }

    document.getElementById("Prime_Numbers").textContent = Prime_Numbers.join(" , ");
    document.getElementById("Even_Numbers").textContent = Even_Numbers.join(" , ");
}