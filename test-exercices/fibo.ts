const fibonacci = (a: number, b: number, n: number) => {
  // const n = 20
  // let a = 0
  // let b = 1
  let fibo = 0

  for (let i=2; i<n; i++){
    fibo = (b * b) + a
    a = b
    b = fibo
  }

  console.log(fibo)
}

fibonacci(0,1,14)