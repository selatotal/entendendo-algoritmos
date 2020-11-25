fn higher(arr: &mut Vec<i64>) -> i64 {
    if arr.len() == 1 {
        arr[0]
    } else {
        let item = arr.remove(0);
        let high = higher(arr);
        match item > high {
            true => item,
            false => high,
        }
    }
}

fn main() {
    let mut list: Vec<i64> = vec![90, 50, 54, 6, 9, 20, 1, 3, 80, 94];
    println!("Higher: {}", higher(list.as_mut()));
}
