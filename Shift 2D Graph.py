class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        n=len(grid)
        m=len(grid[0])
        if n==1 and m==1:
            return grid
        onedlist=[]
        for i in range(n):
            for index in range(m):
                onedlist.append(grid[i][index])
        print(onedlist)
        while k>len(onedlist):
            k=k-len(onedlist)
        newlist=[]
        for i in range(len(onedlist)-k):
            newlist.append(onedlist[i])
        adding=[]
        for i in range(len(onedlist)-k, len(onedlist)):
            adding.append(onedlist[i])
        newlist=adding+newlist
        print(newlist)
        itera=0
        newgrid=grid
        for i in range(n):
            for index in range(m):
                newgrid[i][index]=newlist[itera]
                itera+=1
        return newgrid