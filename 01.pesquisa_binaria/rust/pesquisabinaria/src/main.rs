fn binary_search(list: &Vec<i64>, item: i64) -> Option<i64> {
    let mut low = 0;
    let mut high = list.len() - 1;

    while low <= high {
        let half = (low + high) / 2;
        let guess = list[half];
        if guess == item {
            return Some(half as i64);
        } else if guess > item {
            high = half - 1;
        } else {
            low = half + 1;
        }
    }
    return None;
}

fn main() {
    let list: Vec<i64> = vec![1, 3, 4, 6, 9, 20, 24, 50, 54, 80];
    println!("Position: {}", binary_search(&list, 3).unwrap_or(-1));
    println!("Position: {}", binary_search(&list, 21).unwrap_or(-1));
}
