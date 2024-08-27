use std::io; //Inclui a biblioteca 

pub fn main(){
  let mut n1_input = String::new();
  let mut n2_input = String::new();
  let mut op = String::new();
  let mut res: i32;
  let n1: i32;
  let n2: i32;

  io::stdin().read_line(&mut n1_input).expect("failed to read line");
  io::stdin().read_line(&mut n2_input).expect("failed to read line");

  println!("Deseja Somar ou Multiplicar? (+ ou *)");
  io::stdin().read_line(&mut op).expect("failed to read line");

  n1 = n1_input.trim().parse().unwrap();
  n2 = n2_input.trim().parse().unwrap();

  if op.trim() == "+"{
    res = n1 + n2;
    println!("Soma {} + {} = {}", n1,n2,res);
  }

  if op.trim() == "*"{
    res = n1 * n2;
    println!("Multiplicação {} * {} = {}", n1,n2,res);
  }
}