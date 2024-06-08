function calculate(){
    let Input_Currency = document.getElementById("Input_Currency").value
    let Output_Currency = document.getElementById("Ouput_Currency").value
    let Input_Value = document.getElementById("Input_Value").value
    let Ouput_Value;

    if(Input_Currency=="USD-Dollar" && Input_Currency=="Pakistani Ruppee"){
        Output_Value = Input_Value * 276.88;
    }else if(Input_Currency=="Euro" && Input_Currency=="Pakistani Ruppee"){
        Output_Value = Input_Value * 292.93;
    }else if(Input_Currency=="USD-Dollar" && Input_Currency=="Euro"){
        Output_Value = Input_Value * 0.95;
    }

    document.getElementById("Output_Value")=Output_Currency;
    prime_or_even(Output_Currency);
}
function prime_or_even(n){
    let Prime_Numbers=[];
    let Even_Numbers=[];

    let i;
    for(i=2; i<n; i++){
        if(n%i==0){
            Prime_Numbers.push(i);
        }
    }

    let j;
    for(j=2; j<n; j++){
        if(j==2 || j==3 || j==5 || j==7 || j==11){
            Prime_Numbers.push(j);
        }
        else if(j%2!=0 && j%3!=0 && j%5!=0 && j%7!=0 && j%9!=0){
            Prime_Numbers.push(j);
        }
    }

    document.getElementById("Prime_Numbers").value=Prime_numbers;
    document.getElementById("Even_Numbers").value=Even_Numbers
}