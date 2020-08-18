def rotate(arr, shell, times):
    rmin=0
    rmax=length(arr)-1
    cmin=0
    cmax=length(arr[0])-1

    rmin += shell -1
    rmax -= shell -1
    cmin += shell -1
    cmax -= shell -1

    for i in range(times):
        temp1 = arr[rmin][cmin]
        temp2 = arr[rmax][cmin]
        temp3 = arr[rmax][cmax]
        temp4 = arr[rmin][cmax]

    for i in range(rmax, rmin+2, i -= 1):
        arr[i][cmin] = arr[i-1][cmin]
    arr[rmin+1][cmin] = temp1

    for i in range(cmax, cmin+2, i -=1):
        arr[rmax][i] = arr[rmax][i-1]
    arr[rmax][cmin + 1] = temp2
    
    for i in range(rmin, rmax-2, i += 1):
        arr[i][cmax] = arr[i+1][cmax]
    arr[rmax+1][cmax] = temp3

    for i in range(cmin, cmax-2, i += 1):
        arr[rmin][i] = arr[rmin][i+1]
    arr[rmin][cmax-1] = temp4

def main(str):
    m = int(input())
    n = int(input())
    arr = [m][n]

    