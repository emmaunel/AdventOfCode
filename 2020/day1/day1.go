package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main(){
	var inputArray []int

	fmt.Println("Reading the input file")
	///// READING A FILE INTO AN ARRAY
	f, err := os.Open("input.txt")
	if err != nil {
		fmt.Println("File reading error", err)
	}

	defer func() {
        if err = f.Close(); err != nil {
			fmt.Println("File reading error", err)
		}
	}()
	
    s := bufio.NewScanner(f)
    for s.Scan() {
		// fmt.Println(s.Text())
		strToint, err := strconv.Atoi(s.Text())
		if err != nil {

		}
		inputArray = append(inputArray, strToint)
    }
    err = s.Err()
    if err != nil {
        // log.Fatal(err)
	}
	///// READING A FILE INTO AN ARRAY

	// printSlice(inputArray)

	///// Find first two number to get to 2020
	for i := 0; i < len(inputArray); i++ {
		// fmt.Println(inputArray[i])
		// Add numbers here I think
		for j := 0; j < len(inputArray); j++ {
			if inputArray[i] + inputArray[j] == 2020{
				// fmt.Println("Equal")
				// fmt.Printf("Numbers are %d and %d\n", inputArray[i], inputArray[j])

				// fmt.Println("Now multipy it")
				fmt.Printf("%d X %d = %d\n", inputArray[i], inputArray[j], inputArray[i] * inputArray[j])
				fmt.Println("Done with part 1")
				break
			}
		}
	}


	//// Find first three numbers to get to 2020
	for i := 0; i < len(inputArray); i++ {
		for j := 0; j < len(inputArray); j++ {
			for k := 0; k < len(inputArray); k++ {
				if inputArray[i] + inputArray[j] + inputArray[k] == 2020{
					// fmt.Println("Equal")
					// fmt.Printf("Numbers are %d and %d and %d\n", inputArray[i], inputArray[j], inputArray[k])
	
					// fmt.Println("Now multipy it")
					fmt.Printf("%d X %d X %d= %d\n", inputArray[i], inputArray[j], inputArray[k], inputArray[i] * inputArray[j] * inputArray[k])
					fmt.Println("Done with part 2")
					break
				}
			}
		}
	}
}
