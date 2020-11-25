fn count(arr: &mut Vec<i64>) -> usize {
    match arr.len() {
        0 => 0,
        _ => {
            arr.remove(0);
            1 + count(arr)
        }
    }
}

fn main() {
    let mut list: Vec<i64> = vec![24, 50, 54, 6, 9, 20, 1, 3, 80, 4];
    println!("Count: {}", count(list.as_mut()));
}
