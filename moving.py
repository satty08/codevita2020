def movingAvergae(x, y, n, arr[]):
  list1 = []
  list2 = []
  count = 0
  while i<len(arr)-1:
    twomv = (arr[i]+arr[i+1])/2
    list1.append(twomv)
    twomv = 0
  while i<len(arr)-3:
    fourmv = (arr[i]+arr[i+1]+arr[i+2]+arr[i+3])/4
    list2.append(fourmv)
    fourmv = 0
  for i in range(x, y):
    if list1[i+1] == list2[i]:
      continue
    else:
      count += 1
  return count