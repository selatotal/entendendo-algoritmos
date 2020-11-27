use std::collections::HashMap;

fn verify_voter(voters: &mut HashMap<String, bool>, name: &str) {

    if voters.contains_key(name){
        println!("Go away {}!", name);
    } else {
        voters.insert(String::from(name), true);
        println!("Let {} vote!", name);
    }
}

fn main() {
    let mut voters: HashMap<String, bool> = HashMap::new();
    verify_voter(&mut voters, "Tales");
    verify_voter(&mut voters, "Adriana");
    verify_voter(&mut voters, "Tales");
}
