//: Playground - noun: a place where people can play

import UIKit

func HanoiTower(number: Int, from: String, by: String, to: String) {
    if number == 1 {
        print("towerNumber 1 from "+from+" to "+to);
    } else {
        HanoiTower(number-1, from: from, by: to, to: by);
        print("towerNumber \(number) from "+from+" to "+to)
        HanoiTower(number-1, from: by, by: from, to: to);
    }
}

func main() {
    HanoiTower(3, from: "A", by: "B", to: "C");
}


main()