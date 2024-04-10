let num = 100;
do {
  let gw = num % 10; // 求出个位
  let sw = Math.floor((num / 10)) % 10; // 求出十位
  let bw = Math.floor(num / 100) // 求出百位
  if (Math.pow(gw, 3) + Math.pow(sw, 3) + Math.pow(bw, 3) === num) {
    console.log(num);
  }
  num++;
} while (100 < num && num < 1000)



let plugMap = {
  '1692428097030921244': 'info',
  '1692428097030921243': 'carousel',
  '1692428097030921245': 'goods',
  '1692428097030921242': 'rich',
  '1692428097030921246': 'goodsChoice',
  '1692428097030921247': 'clickChoice',
}
for (let value in plugMap) {
  console.log(value);
}




var arr = [1, 2, 3, 4, 5, 6] // 使用for循环输出[6,5,4,3,2,1]
var start = 0;
var end = arr.length - 1;
for (let i = 0; i < arr.length; i++) {
  if (start < end) {
    var temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
console.log(arr);

// 冒泡排序
var arr = [4, 2, 8, 0, 5, 7, 1, 3, 9, 6]
for (let i = 0; i < arr.length - 1; i++) {
  for (let j = 0; j < arr.length - 1 - i; j++) { // 每一轮要比较的次数
    if (arr[j] > arr[j + 1]) {
      var temp = arr[j];
      arr[j] = arr[j + 1]; // 交换位置
      arr[j + 1] = temp; // 交换位置
    }
  }
}
console.log(arr);


// 冒泡排序
var arr = [7, 2, 4, 6, 0, 9, 1, 3, 5, 8]
for (let i = 0; i < arr.length; i++) {
  for (let j = 0; j < arr.length - 1 - i; j++) {
    if (arr[j] > arr[j + 1]) {
      let temp = arr[j];
      temp = arr[j + 1];
      arr[j + 1] = arr[j];
      arr[j] = temp;
    }
  }
}
console.log(arr);