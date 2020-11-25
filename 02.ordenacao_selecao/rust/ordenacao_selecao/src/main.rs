fn search_lower(arr: &Vec<i64>) -> usize {
    let mut lower = arr[0];
    let mut lower_index = 0;
    for i in 0..arr.len() {
        if arr[i] < lower {
            lower = arr[i];
            lower_index = i;
        }
    }
    return lower_index;
}

fn selection_order(arr: &mut Vec<i64>) -> Vec<i64> {
    let mut new_arr:Vec<i64> = Vec::new();
    for _ in 0..arr.len() {
        let lower = search_lower(arr);
        new_arr.push(arr[lower]);
        arr.remove(lower);
    }
    return new_arr;
}

fn main() {
    let mut list: Vec<i64> = vec![24, 50, 54, 6, 9, 20, 1, 3, 80, 4];
    println!("Position: {:?}", selection_order(list.as_mut()));
}
