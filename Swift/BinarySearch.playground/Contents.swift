//: Playground - noun: a place where people can play

import UIKit
import Foundation


func BinarySearch(first: Int, last: Int, target: Int, array: [Int]) -> Int {
    
    if first > last {
        return -1
    }
    
    let middle = (first + last) / 2

    if target == array[middle] {
        return middle
    } else {
        if target < array[middle] {
            return BinarySearch(first, last: middle-1, target: target, array: array)
        } else {
            return BinarySearch(middle+1, last: last, target: target, array: array)
        }
    }

}


func main() {
    
    let array = [1, 4, 8, 9, 11, 23, 45, 80]
    
    let index = BinarySearch(0, last: sizeofValue(array)-1, target: 8, array: array)
    
    if index == -1 {
        print("Search fail")
    } else {
        print("\(index)")
    }
}

main()




