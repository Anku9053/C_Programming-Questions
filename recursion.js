
// // // function reverse(s, i, j, sum) {
// // //     if (i == s.length) {
// // //         return sum;
// // //     }
// // //     else {
        
// // //         // sum += s[j]

// // //         return reverse(s, i+1, j-1, sum+=s[j])

// // //     }

// // // }

// // // let s = "helloankeshsharma"
// // // // amrahshseknaolleh
// // // let i = 0;
// // // let j = s.length - 1;
// // // let sum = "";
// // // let a = reverse(s, i, j, sum)
// // // console.log(a)





// // // let  arr = [1,3,4,1,2,3,1];
// // // arr.sort((a,b)=>a-b);
// // // let  obj = {};
// // // for(let i =0;i<=arr.length-1;i++){
// // //     if(obj[arr[i]]==undefined){
// // //         obj[arr[i]] = 1;
// // //     }
// // //     else{
// // //         obj[arr[i]]++;
// // //     }
// // // }
// // // let max = -Infinity;
// // // let mini = -Infinity;

// // // let obj2 = {};
// // // for(let key in obj){
    
// // //         max = obj[key];
// // //         obj2[key] = max;
        
// // //         if(obj[key]>mini){
// // //             mini = obj[key];
// // //         }
// // // }

// // // console.log(obj2)

// // // // console.log(obj);


// // // let matrix = [];
// // // for(let i=0;i<mini;i++){
// // //     let arr = [];
// // //     let keyToPush = 1;  // Replace with the key you want to push

// // //     arr.push(keyToPush);
// // //     matrix.push(arr);
// // //     // matrix
// // // }


// // // console.log(matrix);



// // let  arr = [1,3,4,1,2,3,1];


// // arr.sort((a,b)=>a-b);
// // // console.log(arr)
// // let matrix = [];
// // for(let i=0;i<=arr.length-1;i++)
// // {
// //     matrix.push(arr[i])
// // }
// // // console.log(matrix);

// // let array = [];
// // for(let  i=0;i<=matrix.length-1;i++){
// //     if(array[i]!==matrix[i]){
// //         array[i] = matrix[i];
// //     }
// // }
// // console.log(array);



// // Recursion Palindrome


// function recursionpalindrome(str){


//     function compare(arr1,arr2){
//         return arr1.toLowerCase()===arr2.toLowerCase();
//     }


//     function recursive(start,end){
//         if(start>=end){
//             return true;
//         }

//        if(compare(str[start],str[end])){
//         return recursive(start+1,end-1);
//        }

//        else {
//         return false;
//        }
//     }

//     return recursive(0,str.length-1);

// }
// let  str = "racecar";
// console.log(recursionpalindrome(str));


function hanoi(n, sourceRod, targetRod, auxiliaryRod) {
    if (n === 1) {
        console.log(`Move disk 1 from rod ${sourceRod} to rod ${targetRod}`);
        return;
    }

    hanoi(n - 1, sourceRod, auxiliaryRod, targetRod);
    console.log(`this is for second one Move disk ${n} from rod ${sourceRod} to rod ${targetRod}`);
    hanoi(n - 1, auxiliaryRod, targetRod, sourceRod);
}

const numberOfDisks = 4;
const sourceRod = 'A';
const targetRod = 'C';
const auxiliaryRod = 'B';

console.log(`Steps to solve the Towers of Hanoi with ${numberOfDisks} disks:`);
hanoi(numberOfDisks, sourceRod, targetRod, auxiliaryRod);
