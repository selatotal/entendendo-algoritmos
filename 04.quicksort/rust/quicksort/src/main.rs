fn quicksort(arr: &mut Vec<i64>) -> Vec<i64> {
    if arr.len() < 2 {
        return arr.clone();
    }
    let pivot = arr.remove(0);
    let mut lowers:Vec<i64> = arr.clone().into_iter().filter(|&v| v <= pivot).collect();
    let mut greaters:Vec<i64> = arr.clone().into_iter().filter(|&v| v > pivot).collect();

    let mut result = quicksort(lowers.as_mut()).clone();
    result.push(pivot);
    result.append(quicksort(greaters.as_mut()).as_mut());
    result.clone()
}

fn main() {
    let mut list: Vec<i64> = vec![24, 50, 54, 6, 9, 20, 1, 3, 80, 4];
    println!("Sorted: {:?}", quicksort(list.as_mut()));
}
