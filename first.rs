fn main() {
    // hello world
    println!("Hello world");

    // Variables and Mutability: Variables are immutable by default
    // Rust is a statically typed language, which means that it must know the types of all variables at compile time, however, the compiler can usually infer what type we want to use based on the value and how we use it.
    // you can make them mutable with the mut keyword:
    let mut x = 5;
    println!("The value of x is: {}", x);
    x = 6;
    println!("The value of x is: {}", x);

    // data types
    // Rust is a statically typed language, which means that it must know the types of all variables at compile time, however, the compiler can usually infer what type we want to use based on the value and how we use it.
    // Scalar types represent a single value. Rust has four primary scalar types: integers, floating-point numbers, Booleans, and characters.
    // Integers: Rust has signed and unsigned integers. Signed integers can be positive, negative, or zero. Unsigned integers can only be positive or zero.
    // Rust has several built-in data types, including integers, floating-point numbers, booleans, and characters. Here's an example:
    let guess: u32 = "42".parse().expect("Not a number!");
    println!("The guess is: {}", guess);

    // functions
    // Functions are declared with the fn keyword and can accept parameters and return values:
    // Functions can return values to the code that calls them. We don't name return values, but we do declare their type after an arrow (->). In Rust, the return value of the function is synonymous with the value of the final expression in the block of the body of a function.
}