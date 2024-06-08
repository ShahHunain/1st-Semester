function calculate() {
    let operation = document.getElementById("operation").value;
    let input1 = parseFloat(document.getElementById("input1").value);
    let input2 = parseFloat(document.getElementById("input2").value);
    let output;

    if (operation == "+") {
        output = input1 + input2;
    } else if (operation == "-") {
        output = input1 - input2;
    } else if (operation == "*") {
        output = input1 * input2;
    } else if (operation == "/") {
        output = input1 / input2;
    }
    document.getElementById("output").value = output;
}