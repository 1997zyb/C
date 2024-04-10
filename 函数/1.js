// console.log(Number(false));


// var a = 1;
// function f(p) {
//   p = p + 1;
// }
// f(a)
// console.log(a);
// async function f() {
//   let res = await add(1, 2)
//   console.log(res);
//   return res
// }
// function add(a, b) {
//   return a + b;
// }
// var res = f()
// res.then(reslove=>{
//   console.log('resolve',reslove);
// })
// console.log(res);


var x = y = 0;
while(x<15){
  y++;
  x+=++y;
  console.log(y,x);
}
var arr = [
 1,2,3,4
]
var res = arr.flatMap(item=>{
  console.log(item);
  return item
})
console.log(res);